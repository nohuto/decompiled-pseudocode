/*
 * XREFs of MiRemoveUnusedSegment @ 0x140026894
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x140021098 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x1400214D8 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x14008F2E0 (MiReferencePfBackedSection.c)
 *     MiCheckForControlAreaDeletion @ 0x14008F4B0 (MiCheckForControlAreaDeletion.c)
 *     MiPrepareSegmentForDeletion @ 0x14008F8B4 (MiPrepareSegmentForDeletion.c)
 *     MiAttemptSectionDelete @ 0x1400A7650 (MiAttemptSectionDelete.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x1401DF1A8 (MiSetDeleteOnClose.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1401DF28C (MiUnlinkUnusedControlArea.c)
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
