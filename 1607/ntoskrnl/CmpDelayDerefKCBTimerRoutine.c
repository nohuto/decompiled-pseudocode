/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x1400AEF58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
