/*
 * XREFs of KiGetPendingTick @ 0x140128FC8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
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
