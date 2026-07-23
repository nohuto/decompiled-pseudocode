/*
 * XREFs of CcReEngageWorkerThreads @ 0x14010F38C
 * Callers:
 *     CcAdjustWriteBehindThreadPool @ 0x14006F9F0 (CcAdjustWriteBehindThreadPool.c)
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

void __fastcall CcReEngageWorkerThreads(unsigned int a1, unsigned int a2)
{
  unsigned int i; // edi
  PWORK_QUEUE_ITEM v5; // rcx
  struct _LIST_ENTRY *Flink; // rax
  unsigned int j; // ebx
  PWORK_QUEUE_ITEM v8; // rcx
  struct _LIST_ENTRY *v9; // rax

  for ( i = 0; i < a1; ++i )
  {
    v5 = CcIdleWorkerThreadList;
    if ( CcIdleWorkerThreadList == (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList )
      break;
    Flink = CcIdleWorkerThreadList->List.Flink;
    if ( (PWORK_QUEUE_ITEM *)CcIdleWorkerThreadList->List.Blink != &CcIdleWorkerThreadList
      || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleWorkerThreadList )
    {
      __fastfail(3u);
    }
    ++CcNumberActiveWorkerThreads;
    CcIdleWorkerThreadList = (PWORK_QUEUE_ITEM)Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&CcIdleWorkerThreadList;
    v5->List.Flink = 0LL;
    ExQueueWorkItem(v5, CriticalWorkQueue);
  }
  for ( j = 0; j < a2; ++j )
  {
    v8 = CcIdleExtraWriteBehindThreadList;
    if ( CcIdleExtraWriteBehindThreadList == (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList )
      break;
    v9 = CcIdleExtraWriteBehindThreadList->List.Flink;
    if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
      || (PWORK_QUEUE_ITEM)v9->Blink != CcIdleExtraWriteBehindThreadList )
    {
      __fastfail(3u);
    }
    ++CcActiveExtraWriteBehindThreads;
    CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)v9;
    v9->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
    v8->List.Flink = 0LL;
    ExQueueWorkItem(v8, CriticalWorkQueue);
  }
}
