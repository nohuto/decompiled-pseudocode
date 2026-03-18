/*
 * XREFs of UserProcessFreezeCallout @ 0x1C000CAB4
 * Callers:
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 * Callees:
 *     IsSuspendThreadQueueSupported_0 @ 0x1C0002008 (IsSuspendThreadQueueSupported_0.c)
 *     SuspendThreadQueue_0 @ 0x1C0002010 (SuspendThreadQueue_0.c)
 *     IsFreezeThawTimersSupported_0 @ 0x1C0002018 (IsFreezeThawTimersSupported_0.c)
 *     FreezeThawTimers_0 @ 0x1C0002020 (FreezeThawTimers_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserProcessFreezeCallout(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdi
  __int64 i; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v3 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v5 = PsGetCurrentThreadWin32Thread(v4);
  if ( v5 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v5 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v6) = byte_1C01020C8 - 1;
      Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v8, v7.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v7.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
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
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 584) )
    {
      if ( (int)IsSuspendThreadQueueSupported_0() >= 0 )
        SuspendThreadQueue_0();
    }
    *(_DWORD *)(v10 + 776) |= 0x400u;
    if ( (int)IsFreezeThawTimersSupported_0() >= 0 )
      FreezeThawTimers_0();
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
