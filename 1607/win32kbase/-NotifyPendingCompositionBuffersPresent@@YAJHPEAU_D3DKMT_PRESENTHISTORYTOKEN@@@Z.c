/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DE98
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0016FF0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F58 (UserIsCurrentThreadDesktopComposed_0.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C000E0E0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C000E23C (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004866C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  UINT64 FenceValue; // r15
  int v3; // ebx
  int v5; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ecx
  LARGE_INTEGER v13; // rdi
  int v14; // r8d
  __int64 v15; // r8
  PRKSEMAPHORE v17; // rcx
  void *v18; // [rsp+70h] [rbp+18h] BYREF

  FenceValue = a2->Token.Flip.FenceValue;
  v3 = 0;
  v18 = 0LL;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
  }
  v11 = PsGetCurrentThreadWin32Thread(v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v12, (unsigned int)&AcquiredSharedUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( !v5 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
    v3 = -1071775730;
  UserSessionSwitchLeaveCrit();
  if ( v3 >= 0 )
  {
    LOBYTE(v15) = 1;
    v3 = CompositionObject::ResolveHandle(FenceValue, 2LL, v15);
    if ( v3 >= 0 )
    {
      v3 = CompositionTokenObject::MarkPending(0LL);
      if ( v3 >= 0 )
      {
        v3 = CompositionObject::OpenDwmHandle(0LL, &v18);
        if ( v3 >= 0 )
        {
          DirectComposition::CSynchronizationManager::NotifyPresent(MEMORY[0x70], 0);
          a2->Token.Flip.FenceValue = (UINT64)v18;
        }
      }
      ObfDereferenceObject(0LL);
    }
  }
  return (unsigned int)v3;
}
