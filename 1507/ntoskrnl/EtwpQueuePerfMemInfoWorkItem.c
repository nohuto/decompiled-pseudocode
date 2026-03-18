/*
 * XREFs of EtwpQueuePerfMemInfoWorkItem @ 0x14025E184
 * Callers:
 *     EtwpLogMemInfoDpc @ 0x14025DCE0 (EtwpLogMemInfoDpc.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
