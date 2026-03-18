/*
 * XREFs of SepInformFileSystemsOfDeletedLogon @ 0x14052EB48
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepInformFileSystemsOfDeletedLogon(struct _LIST_ENTRY **a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x53466553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].List.Flink = *a1;
    PoolWithTag[1].List.Blink = a2;
    if ( a2 )
      PspReferenceSiloObject(a2);
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))SepNotifyFileSystems;
    v5->Parameter = v5;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
