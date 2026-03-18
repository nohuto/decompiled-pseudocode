/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00AE000 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0002208 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C58 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C60 (UserEnableConsoleMode_0.c)
 *     xxxDwmStopRedirection_0 @ 0x1C0002C68 (xxxDwmStopRedirection_0.c)
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080038 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C00802A0 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0080304 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080334 (GreSfmCleanupPresentHistory.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C00813BC (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(int a1)
{
  unsigned int v1; // r14d
  CTokenManager *v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r8d
  LARGE_INTEGER v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID v18; // rcx
  __int64 v19; // rcx
  LARGE_INTEGER *v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  struct tagTHREADINFO **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID v25; // rcx
  __int64 v26; // rsi
  int v27; // ecx
  LARGE_INTEGER v28; // rdi
  int v29; // r8d

  v1 = 0;
  if ( IsMobileCore() )
    a1 = 0;
  if ( g_bDwmIsShuttingDown )
    a1 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
    v1 = xxxDwmStopRedirection_0();
  if ( g_pTokenManager )
    CTokenManager::DeleteAllTokensInternal(v3);
  UserSessionSwitchLeaveCrit();
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
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
  v13 = PsGetCurrentThreadWin32Thread(v9);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v12) = byte_1C00FEA58 - 1;
      if ( (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v15.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  GreLockDwmState(v12, v11, v14);
  SetDwmApiPort(0LL);
  v18 = g_pepDwm;
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState((__int64)v18, v16, v17);
  if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v1 = UserEnableConsoleMode_0();
    v20 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
    if ( v20 )
      v20[1] = KeQueryPerformanceCounter(0LL);
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v22 )
        v21 = *v22;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v21 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v25 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v21 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v25 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v25, UserRequest, 0, 0, 0LL);
    }
    v26 = PsGetCurrentThreadWin32Thread(v24);
    if ( v26 )
    {
      v28 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v26 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v27) = byte_1C00FEA58 - 1;
        Template_xqx(v27, (unsigned int)&AcquiredExclusiveUserCritEvent, v29, v28.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v28.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v29,
          0,
          1000 * v28.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v26 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v21;
    gbValidateHandleForIL = 1;
  }
  g_bDwmIsShuttingDown = 0;
  if ( a1 )
    xxxDwmControl(1LL, 2LL);
  return v1;
}
