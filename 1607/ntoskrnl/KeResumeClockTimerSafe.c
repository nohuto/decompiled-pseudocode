/*
 * XREFs of KeResumeClockTimerSafe @ 0x1401D22E4
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403DB824 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x1401148A4 (KiResumeClockTimer.c)
 */

LARGE_INTEGER KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  LARGE_INTEGER result; // rax

  if ( KeGetEffectiveIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiResumeClockTimer();
  result.QuadPart = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
