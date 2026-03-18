/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x1400F4364
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
