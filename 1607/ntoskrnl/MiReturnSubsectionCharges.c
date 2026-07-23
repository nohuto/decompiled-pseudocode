/*
 * XREFs of MiReturnSubsectionCharges @ 0x1401F513C
 * Callers:
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleaseControlAreaPartition @ 0x1400279F0 (MiReleaseControlAreaPartition.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14002CA00 (MiReferenceActiveSubsection.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008EBB0 (MmTrimSection.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiFlushRelease @ 0x1400A43EC (MiFlushRelease.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FA798 (MiUpdateLastSubsectionSize.c)
 *     MiAppendSubsectionChain @ 0x1400FAF08 (MiAppendSubsectionChain.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiCleanSection @ 0x140112210 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1401DF1A8 (MiSetDeleteOnClose.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6C20 (MiRemoveSystemCacheReferences.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSubsectionCharges(unsigned __int64 a1)
{
  MiReturnCommit((__int64)MiSystemPartition, a1);
  MiReturnResidentAvailable(a1);
  MiReturnCrossPartitionCharges(qword_1403266F8, a1);
}
