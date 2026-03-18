/*
 * XREFs of MiGetControlAreaPartition @ 0x140026D5C
 * Callers:
 *     MiRemoveUnusedSegment @ 0x140026D14 (MiRemoveUnusedSegment.c)
 *     MiReduceUnusedSubsectionCount @ 0x140090524 (MiReduceUnusedSubsectionCount.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140096CF0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     MiCreateSectionForDriver @ 0x14047D2C8 (MiCreateSectionForDriver.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF, a2, a3, a4);
}
