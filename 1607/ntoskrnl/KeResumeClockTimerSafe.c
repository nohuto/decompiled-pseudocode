/*
 * XREFs of KeResumeClockTimerSafe @ 0x1401D24B8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403DB824 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400516A4 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x140114334 (KiResumeClockTimer.c)
 */

__int64 KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  if ( KeGetEffectiveIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiResumeClockTimer();
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
