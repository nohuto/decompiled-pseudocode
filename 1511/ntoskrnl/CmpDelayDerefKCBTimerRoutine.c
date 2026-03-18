/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x140100010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
