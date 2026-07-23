/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x1400AD4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
