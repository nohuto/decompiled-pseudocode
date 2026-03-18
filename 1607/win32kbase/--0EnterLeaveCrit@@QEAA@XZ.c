/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00B12FC
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d
  EnterLeaveCrit *result; // rax

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
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
  result = this;
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  return result;
}
