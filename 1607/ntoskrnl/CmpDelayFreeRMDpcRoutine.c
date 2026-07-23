/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x1400B3448
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
