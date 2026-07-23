/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400D5040
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x1400BEE2C (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400BF9A0 (PopFxIdleComponent.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     PpmCheckPeriodicStart @ 0x1400D5130 (PpmCheckPeriodicStart.c)
 *     KePrepareClockTimerForIdle @ 0x1400D6600 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     PpmCheckStart @ 0x140111A34 (PpmCheckStart.c)
 *     KiResumeClockTimer @ 0x1401148A4 (KiResumeClockTimer.c)
 *     KeQueryInterruptTimePrecise @ 0x14012A9A0 (KeQueryInterruptTimePrecise.c)
 *     PpmIdleEvaluateConstraints @ 0x14013C1BC (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1401D22B4 (KeGetNextClockTickDuration.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140200314 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdleDurationExpiration @ 0x1402003A4 (PpmIdleDurationExpiration.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402004E4 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1402015C0 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14020740C (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CD58 (PpmEventTracePreVetoAccounting.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // r14
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = v4.QuadPart + (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64);
  }
  return result;
}
