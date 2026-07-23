/*
 * XREFs of MiReduceCommitLimits @ 0x1401ECF74
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140143044 (MiComputeCommitThresholds.c)
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
