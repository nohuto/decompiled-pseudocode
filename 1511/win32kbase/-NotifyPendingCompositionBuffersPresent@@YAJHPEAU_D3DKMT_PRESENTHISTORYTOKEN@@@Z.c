/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0
 * Callers:
 *     GreSfmDxQuerySwapChainBindingStatus @ 0x1C00460D0 (GreSfmDxQuerySwapChainBindingStatus.c)
 * Callees:
 *     UserIsCurrentThreadDesktopComposed_0 @ 0x1C0002F78 (UserIsCurrentThreadDesktopComposed_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0045E58 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0046068 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0ABC (-NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // r15
  int v3; // ebx
  int v5; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v11; // ecx
  int v12; // r8d
  LONGLONG v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 *v15; // rdi
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  void *v18; // [rsp+70h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v3 = 0;
  v18 = 0LL;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v7);
  if ( v9 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = 0x200000010000000LL;
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v9 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      Template_xqx(v11, (unsigned int)&AcquiredSharedUserCritEvent, v12, v13, 0, gullUserCritAcquireToken);
    }
    if ( v13 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      Template_xqx(
        1000 * v13 / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v12,
        0,
        1000 * v13 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  v14 = 0xFFFFLL;
  if ( !v5 || gProtocolType == -1 || !(unsigned int)UserIsCurrentThreadDesktopComposed_0() )
    v3 = -1071775730;
  UserSessionSwitchLeaveCrit(v14, v8);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v3 = CompositionObject::ResolveHandle(FenceValue, 2u, 1, 4, &Object);
    if ( v3 >= 0 )
    {
      v15 = (unsigned __int64 *)Object;
      v3 = CompositionTokenObject::MarkPending((CompositionTokenObject *)Object);
      if ( v3 >= 0 )
      {
        v3 = CompositionObject::OpenDwmHandle((CompositionObject *)v15, &v18);
        if ( v3 >= 0 )
        {
          DirectComposition::CSynchronizationManager::NotifyPresent(v15[14], 0);
          a2->Token.Flip.FenceValue = (UINT64)v18;
        }
      }
      ObfDereferenceObject(v15);
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
