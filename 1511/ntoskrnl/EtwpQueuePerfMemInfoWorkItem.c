/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x14020EE5C
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14020E9B8 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpQueuePerfMemInfoWorkItem(struct _LIST_ENTRY *a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x57777445u);
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))EtwpPerfMemInfoWork;
    PoolWithTag[1].List.Flink = a1;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
}
