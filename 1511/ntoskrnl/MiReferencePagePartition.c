/*
 * XREFs of MiReferencePagePartition @ 0x1401D984C
 * Callers:
 *     MiMoveEccPagesToFreeList @ 0x1401D1CFC (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

int *__fastcall MiReferencePagePartition(__int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rax
  int *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
  v2 = *((_QWORD *)v1 + 1);
  v3 = 0LL;
  if ( v2 )
  {
    v3 = v1;
    *((_QWORD *)v1 + 1) = v2 + 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
