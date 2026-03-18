/*
 * XREFs of MiRemoveUnusedSegment @ 0x140026D14
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x140021518 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x140021958 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140026064 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14008FB80 (MiReferencePfBackedSection.c)
 *     MiCheckForControlAreaDeletion @ 0x14008FD50 (MiCheckForControlAreaDeletion.c)
 *     MiPrepareSegmentForDeletion @ 0x140090154 (MiPrepareSegmentForDeletion.c)
 *     MiAttemptSectionDelete @ 0x1400A90D0 (MiAttemptSectionDelete.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1401DF37C (MiSetDeleteOnClose.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x140026D5C (MiGetControlAreaPartition.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1401DF460 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  volatile LONG *v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = (volatile LONG *)(MiGetControlAreaPartition() + 1664);
    ExAcquireSpinLockExclusiveAtDpcLevel(v2);
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  }
}
