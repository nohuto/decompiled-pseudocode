/*
 * XREFs of KeResumeClockTimerSafe @ 0x1401FEA88
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KiResumeClockTimer @ 0x14014EAC8 (KiResumeClockTimer.c)
 */

void KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl

  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xDu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    KiResumeClockTimer();
    __writecr8(CurrentIrql);
  }
  else
  {
    KiResumeClockTimer();
  }
}
