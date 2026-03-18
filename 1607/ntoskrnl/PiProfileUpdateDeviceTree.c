/*
 * XREFs of PiProfileUpdateDeviceTree @ 0x140641F90
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14064234C (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406423EC (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 PiProfileUpdateDeviceTree()
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->List.Flink = 0LL;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiProfileUpdateDeviceTreeWorker;
  PoolWithTag->Parameter = PoolWithTag;
  ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  return 0LL;
}
