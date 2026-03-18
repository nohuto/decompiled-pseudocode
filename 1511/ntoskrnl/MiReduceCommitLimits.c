/*
 * XREFs of MiReduceCommitLimits @ 0x1401DBF84
 * Callers:
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14013A420 (MiComputeCommitThresholds.c)
 */

void __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 629, &LockHandle);
  if ( a3 )
    a1[625] -= a3;
  if ( a2 )
    a1[765] -= a2;
  MiComputeCommitThresholds(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
