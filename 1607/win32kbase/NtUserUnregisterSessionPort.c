/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C00BBF90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int v2; // ebx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  LARGE_INTEGER v7; // rdi
  LARGE_INTEGER v8; // r8
  PVOID CurrentProcess; // rax
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 1;
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v6 = PsGetCurrentThreadWin32Thread(v4);
  if ( v6 )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v5) = byte_1C0118B28 - 1;
      if ( (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        v12 = 0;
        Template_xqx(v5, &AcquiredExclusiveUserCritEvent, v8.QuadPart, v7.QuadPart, v12, gullUserCritAcquireToken);
      }
    }
    if ( v7.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v11) = 1000 * v7.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v8.QuadPart,
        0LL,
        v11,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
