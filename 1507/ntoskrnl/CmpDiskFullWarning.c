/*
 * XREFs of CmpDiskFullWarning @ 0x14065AE40
 * Callers:
 *     CmpLazyWriteWorker @ 0x140168DC8 (CmpLazyWriteWorker.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void CmpDiskFullWarning()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( !CmpDiskFullWorkerPopupDisplayed && BYTE2(NlsMbCodePageTag) && ExReadyForErrors && BYTE5(NlsMbCodePageTag) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpDiskFullWarningWorker;
      CmpDiskFullWorkerPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
}
