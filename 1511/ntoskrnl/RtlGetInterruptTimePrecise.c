/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1400351D0
 * Callers:
 *     KiCheckWaitNext @ 0x14002A0E0 (KiCheckWaitNext.c)
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400DA934 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 *     KiResumeClockTimer @ 0x140119C68 (KiResumeClockTimer.c)
 *     KeQueryInterruptTimePrecise @ 0x14011F744 (KeQueryInterruptTimePrecise.c)
 *     PpmIdleEvaluateConstraints @ 0x140134F1C (PpmIdleEvaluateConstraints.c)
 *     KeGetNextClockTickDuration @ 0x1401C2CF8 (KeGetNextClockTickDuration.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1401E7930 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdleDurationExpiration @ 0x1401E79C0 (PpmIdleDurationExpiration.c)
 *     PpmIdlePrevetoWatchdog @ 0x1401E7B00 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1401E8D70 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x1401EEAD4 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x1401F2DEC (PpmEventTracePreVetoAccounting.c)
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
