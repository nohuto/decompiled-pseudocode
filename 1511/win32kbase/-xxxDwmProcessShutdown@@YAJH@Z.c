/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00B2190 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0002268 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C88 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C90 (UserEnableConsoleMode_0.c)
 *     xxxDwmStopRedirection_0 @ 0x1C0002C98 (xxxDwmStopRedirection_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080598 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0080800 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0080928 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0080958 (GreSfmCleanupPresentHistory.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(int a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdx
  CTokenManager *v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  LARGE_INTEGER *v16; // rbx
  struct tagTHREADINFO *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // ecx
  LARGE_INTEGER v21; // rbx
  int v22; // r8d
  unsigned int CurrentProcessId; // eax

  v1 = 0;
  if ( IsMobileCore() )
    a1 = 0;
  if ( g_bDwmIsShuttingDown )
    a1 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
    v1 = xxxDwmStopRedirection_0();
  if ( g_pTokenManager )
    CTokenManager::DeleteAllTokensInternal(v4);
  UserSessionSwitchLeaveCrit((__int64)v4, v3);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v10) = byte_1C01020C8 - 1;
      Template_xqx(v10, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v11.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v12,
        0,
        1000 * v11.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v14, v13);
    v1 = UserEnableConsoleMode_0();
    v16 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
    if ( v16 )
      v16[1] = KeQueryPerformanceCounter(0LL);
    v17 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v19 = PsGetCurrentThreadWin32Thread(v18);
    if ( v19 )
    {
      v21 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v20) = byte_1C01020C8 - 1;
        Template_xqx(v20, (unsigned int)&AcquiredExclusiveUserCritEvent, v22, v21.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v21.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v22,
          0,
          1000 * v21.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v17;
    gbValidateHandleForIL = 1;
  }
  g_bDwmIsShuttingDown = 0;
  if ( a1 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v1;
}
