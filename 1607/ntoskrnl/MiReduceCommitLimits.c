/*
 * XREFs of MiReduceCommitLimits @ 0x1401ED148
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140142AD4 (MiComputeCommitThresholds.c)
 */

void __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 709, &LockHandle);
  if ( a3 )
    a1[705] -= a3;
  if ( a2 )
    a1[917] -= a2;
  MiComputeCommitThresholds(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
