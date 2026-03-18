/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14000C640
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14000C5B0 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferencePfBackedSection @ 0x14000E638 (MiReferencePfBackedSection.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 *     MiUnlockFlushMdl @ 0x1400E3A38 (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x1401088B0 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
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
