/*
 * XREFs of CmpDiskFullWarning @ 0x1405E3D10
 * Callers:
 *     CmpLazyWriteWorker @ 0x14013CADC (CmpLazyWriteWorker.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
