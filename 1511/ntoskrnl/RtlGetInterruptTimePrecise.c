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
