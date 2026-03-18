/*
 * XREFs of MiDereferencePartition @ 0x140001D0C
 * Callers:
 *     MiGetNextPartition @ 0x140001C94 (MiGetNextPartition.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E2030 (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2344 (MmMarkPhysicalMemoryAsBad.c)
 *     MiRebalanceZeroFreeLists @ 0x1401F3998 (MiRebalanceZeroFreeLists.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD69C (MiQueueLargeFreeZeroRebuild.c)
 *     MiRebuildLargePages @ 0x1401FDB30 (MiRebuildLargePages.c)
 *     MiRebuildLargeZeroPage @ 0x1401FDD90 (MiRebuildLargeZeroPage.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MmPartitionObjectDelete @ 0x140659C10 (MmPartitionObjectDelete.c)
 *     MiCreatePartition @ 0x1406601A8 (MiCreatePartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDereferencePartitionFinal @ 0x1401F196C (MiDereferencePartitionFinal.c)
 */

void __fastcall MiDereferencePartition(_DWORD *P)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*((_QWORD *)P + 2))-- == 1LL )
  {
    P[1] |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiDereferencePartitionFinal(P);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
