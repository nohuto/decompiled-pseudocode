/*
 * XREFs of UserThreadCallout @ 0x1C001F2C0
 * Callers:
 *     <none>
 * Callees:
 *     IsGetAppCompatFlags2QuadWordSupported_0 @ 0x1C0002AB0 (IsGetAppCompatFlags2QuadWordSupported_0.c)
 *     GetAppCompatFlags2QuadWord_0 @ 0x1C0002AB8 (GetAppCompatFlags2QuadWord_0.c)
 *     IsvShimNoDtToDitMouseBatchSupported_0 @ 0x1C0002AC0 (IsvShimNoDtToDitMouseBatchSupported_0.c)
 *     vShimNoDtToDitMouseBatch_0 @ 0x1C0002AC8 (vShimNoDtToDitMouseBatch_0.c)
 *     IsxxxFullScreenCleanupSupported_0 @ 0x1C0002AD0 (IsxxxFullScreenCleanupSupported_0.c)
 *     xxxFullScreenCleanup_0 @ 0x1C0002AD8 (xxxFullScreenCleanup_0.c)
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     RtlGetExpWinVer @ 0x1C0076E74 (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x1C0077530 (GreCleanDC.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // r15d
  bool v3; // di
  __int64 v5; // rcx
  __int64 v6; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v8; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // ecx
  LARGE_INTEGER v15; // rsi
  int v16; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r14
  int v22; // ecx
  LARGE_INTEGER v23; // rsi
  int v24; // r8d
  __int64 ThreadWin32Thread; // rsi
  int v26; // eax

  ThreadInfo = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v21 = PsGetCurrentThreadWin32Thread(v20);
    if ( v21 )
    {
      v23 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v21 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v22, (unsigned int)&AcquiredExclusiveUserCritEvent, v24, v23.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v23.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v23.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v24,
          0,
          1000 * v23.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v21 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v19;
    gbValidateHandleForIL = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
    *(_DWORD *)(ThreadWin32Thread + 440) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported_0() >= 0 )
      xxxFullScreenCleanup_0();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 24));
    if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 2) != 0 )
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
    if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 1) == 0 )
    {
      v3 = (int)IsGetAppCompatFlags2QuadWordSupported_0() >= 0
        && (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) != 0;
      xxxDestroyThreadInfo();
    }
    UserSessionSwitchLeaveCrit();
    if ( !v3 )
      return ThreadInfo;
    v26 = IsvShimNoDtToDitMouseBatchSupported_0();
    if ( v26 < 0 )
      return ThreadInfo;
    goto LABEL_64;
  }
  if ( !gbNoMorePowerCallouts )
  {
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread(Thread) + 1096), 0);
      return ThreadInfo;
    }
    v6 = W32GetThreadWin32Thread(Thread);
    if ( v6 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v8 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v8);
        *(_DWORD *)(v6 + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v6 + 552) = 0;
      }
    }
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
    v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v16, v15.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v16,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 )
      v3 = (int)IsGetAppCompatFlags2QuadWordSupported_0() >= 0
        && (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) != 0;
    UserSessionSwitchLeaveCrit();
    if ( !v3 || (int)IsvShimNoDtToDitMouseBatchSupported_0() < 0 )
      return ThreadInfo;
LABEL_64:
    vShimNoDtToDitMouseBatch_0();
    return ThreadInfo;
  }
  return 3221225473LL;
}
