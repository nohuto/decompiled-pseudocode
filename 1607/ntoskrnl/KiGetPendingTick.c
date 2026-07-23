/*
 * XREFs of KiGetPendingTick @ 0x1400AB1D8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

char KiGetPendingTick()
{
  struct _KPRCB *CurrentPrcb; // rax

  if ( KiClockTimerPerCpu )
    CurrentPrcb = KeGetCurrentPrcb();
  else
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  return CurrentPrcb->PendingTickFlags & 1;
}
