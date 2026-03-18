/*
 * XREFs of ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004850
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void __fastcall DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit(DwmHitTestLeaveEnterCrit *this)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ecx
  LARGE_INTEGER v6; // rbx
  int v7; // r8d

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v4 = PsGetCurrentThreadWin32Thread(v3);
  if ( v4 )
  {
    v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v5) = byte_1C0118B28 - 1;
      Template_xqx(v5, (unsigned int)&AcquiredExclusiveUserCritEvent, v7, v6.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v6.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v7,
        0,
        1000 * v6.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v4 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gbDITInHitTest = 0;
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( gcDITHitTestWaiters )
  {
    KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
    gcDITHitTestWaiters = 0;
  }
}
