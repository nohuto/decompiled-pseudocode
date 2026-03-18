/*
 * XREFs of UserThreadCallout @ 0x1C004F0C0
 * Callers:
 *     <none>
 * Callees:
 *     IsGetAppCompatFlags2QuadWordSupported_0 @ 0x1C0002A80 (IsGetAppCompatFlags2QuadWordSupported_0.c)
 *     GetAppCompatFlags2QuadWord_0 @ 0x1C0002A88 (GetAppCompatFlags2QuadWord_0.c)
 *     IsvShimNoDtToDitMouseBatchSupported_0 @ 0x1C0002A90 (IsvShimNoDtToDitMouseBatchSupported_0.c)
 *     vShimNoDtToDitMouseBatch_0 @ 0x1C0002A98 (vShimNoDtToDitMouseBatch_0.c)
 *     IsxxxFullScreenCleanupSupported_0 @ 0x1C0002AA0 (IsxxxFullScreenCleanupSupported_0.c)
 *     xxxFullScreenCleanup_0 @ 0x1C0002AA8 (xxxFullScreenCleanup_0.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C004F614 (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x1C0050BE0 (GreCleanDC.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // r12d
  char v4; // bp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rdi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  __int64 v11; // r14
  int v12; // ecx
  LARGE_INTEGER v13; // rsi
  int v14; // r8d
  __int64 ThreadWin32Thread; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v20; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v22; // rbx
  struct tagTHREADINFO *v23; // rdi
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  PVOID v27; // rcx
  __int64 v28; // r14
  int v29; // ecx
  LARGE_INTEGER v30; // rsi
  int v31; // r8d

  ThreadInfo = 0;
  v4 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v7 )
        v6 = *v7;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v6 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v10 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v6 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v10 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v10, UserRequest, 0, 0, 0LL);
    }
    v11 = PsGetCurrentThreadWin32Thread(v9);
    if ( v11 )
    {
      v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v14,
          0,
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_DWORD *)(ThreadWin32Thread + 448) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported_0() >= 0 )
      xxxFullScreenCleanup_0();
    if ( !gbRemoteSession || gbVideoInitialized )
      GreCleanDC(*(HDC *)(gpDispInfo + 24));
    if ( (*(_DWORD *)(ThreadWin32Thread + 1080) & 2) != 0 )
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 0;
    if ( (*(_DWORD *)(ThreadWin32Thread + 1080) & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported_0() < 0
        || (v4 = 1, (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) == 0) )
      {
        v4 = 0;
      }
      xxxDestroyThreadInfo();
    }
    UserSessionSwitchLeaveCrit();
    if ( !v4 || (int)IsvShimNoDtToDitMouseBatchSupported_0() < 0 )
      return ThreadInfo;
  }
  else
  {
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1080), 0);
      return ThreadInfo;
    }
    v18 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v18 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v20 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v20);
        *(_DWORD *)(v18 + 560) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v18 + 560) = 0;
      }
    }
    v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17);
    if ( v22 )
      v22[1] = KeQueryPerformanceCounter(0LL);
    v23 = 0LL;
    while ( 1 )
    {
      v24 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v24 )
        v23 = *v24;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v23 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v27 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v23 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v27 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v27, UserRequest, 0, 0, 0LL);
    }
    v28 = PsGetCurrentThreadWin32Thread(v26);
    if ( v28 )
    {
      v30 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v28 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v29, (unsigned int)&AcquiredExclusiveUserCritEvent, v31, v30.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v30.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v30.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v31,
          0,
          1000 * v30.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v28 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported_0() < 0
        || (v4 = 1, (GetAppCompatFlags2QuadWord_0() & 0x400000000000000LL) == 0) )
      {
        v4 = 0;
      }
    }
    UserSessionSwitchLeaveCrit();
    if ( !v4 || (int)IsvShimNoDtToDitMouseBatchSupported_0() < 0 )
      return ThreadInfo;
  }
  vShimNoDtToDitMouseBatch_0();
  return ThreadInfo;
}
