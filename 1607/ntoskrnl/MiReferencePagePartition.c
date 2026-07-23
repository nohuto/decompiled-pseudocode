/*
 * XREFs of MiReferencePagePartition @ 0x1401E822C
 * Callers:
 *     MiMoveEccPagesToFreeList @ 0x1401E1E5C (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

int *__fastcall MiReferencePagePartition(__int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rax
  int *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = *((_QWORD *)v1 + 2);
  v3 = 0LL;
  if ( v2 )
  {
    v3 = v1;
    *((_QWORD *)v1 + 2) = v2 + 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
