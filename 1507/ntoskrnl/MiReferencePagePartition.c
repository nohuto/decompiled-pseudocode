/*
 * XREFs of MiReferencePagePartition @ 0x14021D890
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int16 *__fastcall MiReferencePagePartition(__int64 a1)
{
  __int16 *v1; // rdi
  __int64 v2; // rax
  __int16 *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
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
