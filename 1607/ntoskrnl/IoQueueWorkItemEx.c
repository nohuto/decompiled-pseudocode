/*
 * XREFs of IoQueueWorkItemEx @ 0x1400D1154
 * Callers:
 *     IoQueueWorkItem @ 0x1400AE7A4 (IoQueueWorkItem.c)
 * Callees:
 *     IopQueueWorkItemProlog @ 0x1400D1408 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  v4 = IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v4);
}
