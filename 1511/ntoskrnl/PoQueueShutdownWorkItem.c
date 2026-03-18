/*
 * XREFs of PoQueueShutdownWorkItem @ 0x140635A0C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *v3; // rax

  ExAcquireFastMutex(&PopShutdownListMutex);
  v2 = 0;
  if ( PopShutdownListAvailable )
  {
    v3 = (struct _LIST_ENTRY *)qword_1402DEEC8;
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&PopShutdownQueue;
    WorkItem->List.Blink = v3;
    if ( (__int64 *)v3->Flink != &PopShutdownQueue )
      __fastfail(3u);
    v3->Flink = &WorkItem->List;
    qword_1402DEEC8 = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v2;
}
