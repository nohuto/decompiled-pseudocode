/*
 * XREFs of NtUserCheckProcessSession @ 0x1C007CCE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     xxxDwmCheckProcessSession @ 0x1C007CE00 (xxxDwmCheckProcessSession.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1)
{
  unsigned int v1; // ebp
  int v2; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  LARGE_INTEGER v8; // rdi
  int v9; // r8d
  PVOID CurrentProcess; // rax
  __int64 v11; // rcx
  NTSTATUS v12; // eax

  v1 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v7 = PsGetCurrentThreadWin32Thread(v5);
  if ( v7 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v6) = byte_1C0118B28 - 1;
      if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v6, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
      }
    }
    if ( v8.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v9,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    v12 = xxxDwmCheckProcessSession(v1);
    if ( v12 >= 0 )
    {
      v2 = 1;
      goto LABEL_13;
    }
    v11 = RtlNtStatusToDosError(v12);
  }
  else
  {
    v11 = 5LL;
  }
  UserSetLastError(v11);
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return v2;
}
