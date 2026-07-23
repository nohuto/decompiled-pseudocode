/*
 * XREFs of KeResumeClockTimerSafe @ 0x1401C2D28
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403AF798 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1403B041C (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x1403B0D90 (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x140119C68 (KiResumeClockTimer.c)
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
