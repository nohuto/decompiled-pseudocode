/*
 * XREFs of MiGetControlAreaPartition @ 0x1400268DC
 * Callers:
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiReduceUnusedSubsectionCount @ 0x14008FC84 (MiReduceUnusedSubsectionCount.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1400964F0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     MiCreateSectionForDriver @ 0x14048338C (MiCreateSectionForDriver.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF, a2, a3, a4);
}
