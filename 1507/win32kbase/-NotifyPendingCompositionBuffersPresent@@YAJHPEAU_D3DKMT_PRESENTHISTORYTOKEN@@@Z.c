/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00208B4
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C0020890 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F38 (UserIsCurrentThreadDesktopComposed_0.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0021BA0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0021CA0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0021E40 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0070800 (-NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  UINT64 FenceValue; // r15
  int v3; // ebx
  int v5; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // ecx
  LONGLONG v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID v24; // rcx
  void *v25; // [rsp+70h] [rbp+18h] BYREF

  FenceValue = a2->Token.Flip.FenceValue;
  v3 = 0;
  v25 = 0LL;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v24 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v24 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v24, UserRequest, 0, 0, 0LL);
  }
  v15 = PsGetCurrentThreadWin32Thread(v13);
  if ( v15 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = 0x200000010000000LL;
    v20 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v19, (unsigned int)&AcquiredSharedUserCritEvent, v16, v20, 0, gullUserCritAcquireToken);
    }
    if ( v20 >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v20 / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v16,
        0,
        1000 * v20 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  v21 = 0xFFFFLL;
  if ( !v5 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
    v3 = -1071775730;
  UserSessionSwitchLeaveCrit(v21, v14, v16, v17);
  if ( v3 >= 0 )
  {
    LOBYTE(v22) = 1;
    v3 = CompositionObject::ResolveHandle(FenceValue, 2LL, v22);
    if ( v3 >= 0 )
    {
      v3 = CompositionTokenObject::MarkPending(0LL);
      if ( v3 >= 0 )
      {
        v3 = CompositionObject::OpenDwmHandle(0LL, &v25);
        if ( v3 >= 0 )
        {
          DirectComposition::CSynchronizationManager::NotifyPresent(MEMORY[0x70], 0);
          a2->Token.Flip.FenceValue = (UINT64)v25;
        }
      }
      ObfDereferenceObject(0LL);
    }
  }
  if ( v3 == -1071775730 )
  {
    v3 = NotifyCompositionBuffersOfSkippedToken(a2);
    if ( v3 >= 0 )
      return (unsigned int)-1071775730;
  }
  return (unsigned int)v3;
}
