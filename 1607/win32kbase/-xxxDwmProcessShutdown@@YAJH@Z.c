/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00BBF90 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0001DC8 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsUserEnableConsoleModeSupported_0 @ 0x1C0002C88 (IsUserEnableConsoleModeSupported_0.c)
 *     UserEnableConsoleMode_0 @ 0x1C0002C90 (UserEnableConsoleMode_0.c)
 *     xxxDwmStopRedirection_0 @ 0x1C0002C98 (xxxDwmStopRedirection_0.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C001A54C (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007187C (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0071AE0 (xxxDwmControl.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0071C38 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0071C68 (GreSfmCleanupPresentHistory.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(int a1)
{
  unsigned int v1; // r14d
  CTokenManager *v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ecx
  LARGE_INTEGER v10; // rbx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v18; // rcx
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO *v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // ecx
  LARGE_INTEGER v24; // rbx
  int v25; // r8d

  v1 = 0;
  if ( IsMobileCore() )
    a1 = 0;
  if ( g_bDwmIsShuttingDown )
    a1 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
    v1 = xxxDwmStopRedirection_0();
  if ( g_pTokenManager )
    CTokenManager::DeleteAllTokensInternal(v3);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v9) = byte_1C0118B28 - 1;
      Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
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
  GreLockDwmState();
  SetDwmApiPort(0LL);
  v15 = g_pepDwm;
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState(v15, v12, v13, v14);
  if ( (int)IsUserEnableConsoleModeSupported_0() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v1 = UserEnableConsoleMode_0();
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
    v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v22 = PsGetCurrentThreadWin32Thread(v21);
    if ( v22 )
    {
      v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v23) = byte_1C0118B28 - 1;
        Template_xqx(v23, (unsigned int)&AcquiredExclusiveUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v24.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
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
  }
  g_bDwmIsShuttingDown = 0;
  if ( a1 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v1;
}
