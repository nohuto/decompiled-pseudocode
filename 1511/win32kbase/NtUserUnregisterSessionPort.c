/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C00B2190
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v9; // r8
  LONGLONG v10; // rdi
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 1;
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v7 = PsGetCurrentThreadWin32Thread(v4);
  if ( v7 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v5 = 0x200000010000000LL;
    v10 = PerformanceCounter.QuadPart - *(_QWORD *)(v7 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v6) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        v17 = 0;
        Template_xqx(v6, &AcquiredExclusiveUserCritEvent, v9.QuadPart, v10, v17, gullUserCritAcquireToken);
      }
    }
    if ( v10 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v16) = 1000 * v10 / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v9.QuadPart,
        0LL,
        v16,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL, v12);
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v2;
}
