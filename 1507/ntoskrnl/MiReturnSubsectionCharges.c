/*
 * XREFs of MiReturnSubsectionCharges @ 0x140230538
 * Callers:
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiAppendSubsectionChain @ 0x140077D64 (MiAppendSubsectionChain.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiReleaseControlAreaPartition @ 0x14008B010 (MiReleaseControlAreaPartition.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiFlushRelease @ 0x1401198B8 (MiFlushRelease.c)
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1402122AC (MiSetDeleteOnClose.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnSubsectionCharges(unsigned __int64 a1)
{
  MiReturnCommit((__int64)MiSystemPartition, a1);
  MiReturnResidentAvailable(a1);
  _InterlockedExchangeAdd64(&qword_14034FA38, a1);
  return MiReturnCrossPartitionCharges(qword_14034E8B8, a1);
}
