/*
 * XREFs of MiReturnSubsectionCharges @ 0x1401F5310
 * Callers:
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002270C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReleaseControlAreaPartition @ 0x140027E70 (MiReleaseControlAreaPartition.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x14002C690 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14002CE80 (MiReferenceActiveSubsection.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x14008F450 (MmTrimSection.c)
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008FC70 (MiDereferenceControlAreaPfnList.c)
 *     MiCreatePrototypePtes @ 0x14008FE84 (MiCreatePrototypePtes.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiFlushRelease @ 0x1400A5E74 (MiFlushRelease.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FCA18 (MiUpdateLastSubsectionSize.c)
 *     MiAppendSubsectionChain @ 0x1400FD188 (MiAppendSubsectionChain.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiCleanSection @ 0x140111CAC (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1401DF37C (MiSetDeleteOnClose.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6DF4 (MiRemoveSystemCacheReferences.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAE48 (MiFreeOverlappedFlushEntry.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSubsectionCharges(unsigned __int64 a1)
{
  MiReturnCommit((__int64)MiSystemPartition, a1);
  MiReturnResidentAvailable(a1);
  MiReturnCrossPartitionCharges(qword_1403266B8, a1);
}
