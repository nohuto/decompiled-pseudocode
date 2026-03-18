/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140026CE8
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x140021518 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x140021958 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140026064 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008EFFC (MiUnlockFlushMdl.c)
 *     MiReferencePfBackedSection @ 0x14008FB80 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140115B2C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1401DE4D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1401EAD40 (MiFlushComplete.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x140522048 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
