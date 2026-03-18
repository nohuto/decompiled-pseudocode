/*
 * XREFs of UserEnterUserCritSec @ 0x1C007B610
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserEnterUserCritSec(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // ecx
  LARGE_INTEGER v7; // rbx
  int v8; // r8d

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
  result = PsGetCurrentThreadWin32Thread(v3);
  v5 = result;
  if ( result )
  {
    v7 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(result + 8));
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
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v5 + 16) = result;
  }
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  return result;
}
