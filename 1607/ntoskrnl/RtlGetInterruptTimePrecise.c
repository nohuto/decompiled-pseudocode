/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400D71A0
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x1400C0F9C (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 *     KiCheckWaitNext @ 0x1400D0B40 (KiCheckWaitNext.c)
 *     PpmCheckPeriodicStart @ 0x1400D7290 (PpmCheckPeriodicStart.c)
 *     KePrepareClockTimerForIdle @ 0x1400D8760 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     PpmCheckStart @ 0x1401114D0 (PpmCheckStart.c)
 *     KiResumeClockTimer @ 0x140114334 (KiResumeClockTimer.c)
 *     KeQueryInterruptTimePrecise @ 0x14012A430 (KeQueryInterruptTimePrecise.c)
 *     PpmIdleEvaluateConstraints @ 0x14013BC4C (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1401D2488 (KeGetNextClockTickDuration.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402004E8 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdleDurationExpiration @ 0x140200578 (PpmIdleDurationExpiration.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402006B8 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140201794 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1402075E0 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CF2C (PpmEventTracePreVetoAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return v4 + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
}
