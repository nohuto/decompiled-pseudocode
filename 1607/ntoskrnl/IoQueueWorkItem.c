/*
 * XREFs of IoQueueWorkItem @ 0x1400ACD0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  IoWorkItem->Type = 0;
  IoQueueWorkItemEx(IoWorkItem, (PIO_WORKITEM_ROUTINE_EX)WorkerRoutine, QueueType, Context);
}
