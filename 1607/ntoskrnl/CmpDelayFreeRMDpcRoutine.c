/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x1400B5620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
