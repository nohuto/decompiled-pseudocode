/*
 * XREFs of IoQueueWorkItem @ 0x1401013B4
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  struct _WORK_QUEUE_ITEM *v5; // rax

  IoWorkItem->Type = 0;
  v5 = (struct _WORK_QUEUE_ITEM *)IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItem(v5, QueueType);
}
