/*
 * XREFs of MiDereferencePartition @ 0x1400BC1D4
 * Callers:
 *     MiGetNextPartition @ 0x14011B670 (MiGetNextPartition.c)
 *     MiMoveEccPagesToFreeList @ 0x1401D1CFC (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MiRebalanceZeroFreeLists @ 0x1401E424C (MiRebalanceZeroFreeLists.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     MiRebuildLargePages @ 0x140484180 (MiRebuildLargePages.c)
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MmPartitionObjectDelete @ 0x140624D04 (MmPartitionObjectDelete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x140624414 (MiFreePartitionId.c)
 */

void __fastcall MiDereferencePartition(_DWORD *P)
{
  __int64 v3; // rax
  void *v4; // rsi
  unsigned __int16 v5; // bx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
  if ( (*((_QWORD *)P + 1))-- == 1LL )
  {
    P[1] |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiDeletePartitionResources(P);
    v3 = *((_QWORD *)P + 2);
    v4 = 0LL;
    if ( v3 )
      v4 = *(void **)(v3 + 200);
    v5 = *(_WORD *)P;
    ExFreePoolWithTag(P, 0);
    MiFreePartitionId(v5);
    if ( v4 )
      ObDereferenceObjectDeferDeleteWithTag(v4, 0x746C6644u);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
