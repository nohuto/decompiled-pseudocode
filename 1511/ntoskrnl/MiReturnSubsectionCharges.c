/*
 * XREFs of MiReturnSubsectionCharges @ 0x1401E3170
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiAppendSubsectionChain @ 0x14000A4A4 (MiAppendSubsectionChain.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiReleaseControlAreaPartition @ 0x14006DC60 (MiReleaseControlAreaPartition.c)
 *     MiFlushRelease @ 0x140098554 (MiFlushRelease.c)
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MmTrimSection @ 0x1400E8FF0 (MmTrimSection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400ED09C (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x140107088 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1401D18A4 (MiSetDeleteOnClose.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401DA230 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSubsectionCharges(unsigned __int64 a1)
{
  MiReturnCommit((__int64)MiSystemPartition, a1);
  MiReturnResidentAvailable(a1);
  _InterlockedExchangeAdd64(&qword_1402FF598, a1);
  MiReturnCrossPartitionCharges(qword_1402FE3F0, a1);
}
