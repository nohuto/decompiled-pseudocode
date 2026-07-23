/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140026868
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x140021098 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x1400214D8 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008E75C (MiUnlockFlushMdl.c)
 *     MiReferencePfBackedSection @ 0x14008F2E0 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x14011609C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
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
