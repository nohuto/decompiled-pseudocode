/*
 * XREFs of ChangeAcquireResourceType @ 0x1C0076DD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d

  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v3);
  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  result = PsGetCurrentThreadWin32Thread(v7);
  v9 = result;
  if ( result )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(result + 8));
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
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v9 + 16) = result;
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  return result;
}
