/*
 * XREFs of UserThreadCallout @ 0x1C0021F20
 * Callers:
 *     <none>
 * Callees:
 *     IsGetAppCompatFlags2QuadWordSupported_0 @ 0x1C0002AB0 (IsGetAppCompatFlags2QuadWordSupported_0.c)
 *     GetAppCompatFlags2QuadWord_0 @ 0x1C0002AB8 (GetAppCompatFlags2QuadWord_0.c)
 *     IsvShimNoDtToDitMouseBatchSupported_0 @ 0x1C0002AC0 (IsvShimNoDtToDitMouseBatchSupported_0.c)
 *     vShimNoDtToDitMouseBatch_0 @ 0x1C0002AC8 (vShimNoDtToDitMouseBatch_0.c)
 *     IsxxxFullScreenCleanupSupported_0 @ 0x1C0002AD0 (IsxxxFullScreenCleanupSupported_0.c)
 *     xxxFullScreenCleanup_0 @ 0x1C0002AD8 (xxxFullScreenCleanup_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     GreCleanDC @ 0x1C0042200 (GreCleanDC.c)
 *     RtlGetExpWinVer @ 0x1C0072890 (RtlGetExpWinVer.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // r15d
  bool v3; // di
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r14
  int v9; // ecx
  LARGE_INTEGER v10; // rsi
  int v11; // r8d
  __int64 ThreadWin32Thread; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v17; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // ecx
  LARGE_INTEGER v24; // rsi
  int v25; // r8d

  ThreadInfo = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v8 = PsGetCurrentThreadWin32Thread(v7);
    if ( v8 )
    {
      v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v10.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v11,
          0,
          1000 * v10.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
    *(_DWORD *)(ThreadWin32Thread + 440) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported_0() >= 0 )
      xxxFullScreenCleanup_0();
    if ( !gbRemoteSession || gbVideoInitialized )
      GreCleanDC(*(HDC *)(gpDispInfo + 24));
    if ( (*(_DWORD *)(ThreadWin32Thread + 1072) & 2) != 0 )
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
    if ( (*(_DWORD *)(ThreadWin32Thread + 1072) & 1) == 0 )
    {
      v3 = (int)IsGetAppCompatFlags2QuadWordSupported_0() >= 0
        && (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) != 0;
      xxxDestroyThreadInfo();
    }
    UserSessionSwitchLeaveCrit();
    if ( !v3 || (int)IsvShimNoDtToDitMouseBatchSupported_0() < 0 )
      return ThreadInfo;
  }
  else
  {
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread(Thread) + 1072), 0);
      return ThreadInfo;
    }
    v15 = W32GetThreadWin32Thread(Thread);
    if ( v15 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v17 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v17);
        *(_DWORD *)(v15 + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v15 + 552) = 0;
      }
    }
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
    v20 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v22 = PsGetCurrentThreadWin32Thread(v21);
    if ( v22 )
    {
      v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v23, (unsigned int)&AcquiredExclusiveUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v24.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v25,
          0,
          1000 * v24.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v20;
    gbValidateHandleForIL = 1;
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 )
      v3 = (int)IsGetAppCompatFlags2QuadWordSupported_0() >= 0
        && (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) != 0;
    UserSessionSwitchLeaveCrit();
    if ( !v3 || (int)IsvShimNoDtToDitMouseBatchSupported_0() < 0 )
      return ThreadInfo;
  }
  vShimNoDtToDitMouseBatch_0();
  return ThreadInfo;
}
