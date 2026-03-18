/*
 * XREFs of MiReduceCommitLimits @ 0x140220C38
 * Callers:
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14016BDA4 (MiComputeCommitThresholds.c)
 */

void __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 597, &LockHandle);
  if ( a3 )
    a1[593] -= a3;
  if ( a2 )
    a1[717] -= a2;
  MiComputeCommitThresholds(a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
