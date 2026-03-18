/*
 * XREFs of IoQueueWorkItemEx @ 0x14000D2C8
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14000DA70 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  struct _WORK_QUEUE_ITEM *v5; // rax

  v5 = (struct _WORK_QUEUE_ITEM *)IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItem(v5, QueueType);
}
