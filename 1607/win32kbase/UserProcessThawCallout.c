/*
 * XREFs of UserProcessThawCallout @ 0x1C007A818
 * Callers:
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 * Callees:
 *     IsFreezeThawTimersSupported_0 @ 0x1C0002318 (IsFreezeThawTimersSupported_0.c)
 *     FreezeThawTimers_0 @ 0x1C0002320 (FreezeThawTimers_0.c)
 *     IsResumeThreadQueueSupported_0 @ 0x1C0002328 (IsResumeThreadQueueSupported_0.c)
 *     ResumeThreadQueue_0 @ 0x1C0002330 (ResumeThreadQueue_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall UserProcessThawCallout(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  __int64 ProcessWin32Process; // rsi
  __int64 i; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v5 = PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v6) = byte_1C0118B28 - 1;
      Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v7.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v8,
        0,
        1000 * v7.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 288); i; i = *(_QWORD *)(i + 584) )
    {
      if ( (int)IsResumeThreadQueueSupported_0() >= 0 )
        ResumeThreadQueue_0();
    }
    *(_DWORD *)(ProcessWin32Process + 768) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported_0() >= 0 )
      FreezeThawTimers_0();
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
