/*
 * XREFs of CmpDelayFreeRMDpcRoutine @ 0x140131BD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}
