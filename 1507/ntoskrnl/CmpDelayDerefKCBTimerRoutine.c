/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x14012C47C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
