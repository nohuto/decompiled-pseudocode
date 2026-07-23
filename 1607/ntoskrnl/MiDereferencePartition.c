/*
 * XREFs of MiDereferencePartition @ 0x140001E80
 * Callers:
 *     MiGetNextPartition @ 0x140001E08 (MiGetNextPartition.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E1E5C (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiRebalanceZeroFreeLists @ 0x1401F37C4 (MiRebalanceZeroFreeLists.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD4C8 (MiQueueLargeFreeZeroRebuild.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 *     MiRebuildLargeZeroPage @ 0x1401FDBBC (MiRebuildLargeZeroPage.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmPartitionObjectDelete @ 0x140659CF4 (MmPartitionObjectDelete.c)
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDereferencePartitionFinal @ 0x1401F1798 (MiDereferencePartitionFinal.c)
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
