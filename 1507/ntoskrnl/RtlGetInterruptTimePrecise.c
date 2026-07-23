/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400EA820
 * Callers:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     KePrepareClockTimerForIdle @ 0x1400E6CE0 (KePrepareClockTimerForIdle.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeIntSteerSnapPerf @ 0x1400EA650 (KeIntSteerSnapPerf.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x14012A5F8 (PopFxResidentTimeoutRoutine.c)
 *     KiResumeClockTimer @ 0x14014EAC8 (KiResumeClockTimer.c)
 *     KeQueryInterruptTimePrecise @ 0x140154870 (KeQueryInterruptTimePrecise.c)
 *     PpmIdleEvaluateConstraints @ 0x14016165C (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1401FEA58 (KeGetNextClockTickDuration.c)
 *     PpmIdleDurationExpiration @ 0x140234C7C (PpmIdleDurationExpiration.c)
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
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
