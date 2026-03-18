/*
 * XREFs of NtUserCheckProcessSession @ 0x1C0078D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     xxxDwmCheckProcessSession @ 0x1C0078EE0 (xxxDwmCheckProcessSession.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // r8d
  LONGLONG v11; // rdi
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v1 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v5);
  if ( v8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = 0x200000010000000LL;
    v11 = PerformanceCounter.QuadPart - *(_QWORD *)(v8 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v11, 0, gullUserCritAcquireToken);
      }
    }
    if ( v11 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v10,
        0,
        1000 * v11 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
  {
    v17 = 5LL;
    goto LABEL_20;
  }
  v14 = xxxDwmCheckProcessSession(v1);
  if ( v14 < 0 )
  {
    v17 = RtlNtStatusToDosError(v14);
LABEL_20:
    UserSetLastError(v17, v13);
    goto LABEL_21;
  }
  v2 = 1;
LABEL_21:
  UserSessionSwitchLeaveCrit(v16, v15);
  return v2;
}
