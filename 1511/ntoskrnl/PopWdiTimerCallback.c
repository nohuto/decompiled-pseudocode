/*
 * XREFs of PopWdiTimerCallback @ 0x1401F1138
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWdiTimerWorker, DelayedWorkQueue);
}
