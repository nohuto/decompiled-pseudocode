/*
 * XREFs of MiDestroySection @ 0x140112284
 * Callers:
 *     MiCleanSection @ 0x140112210 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiClearFilePointer @ 0x14008F584 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x14008F94C (MiDrainControlAreaWrites.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, KIRQL a2, struct _FILE_OBJECT *a3)
{
  *(_DWORD *)(a1 + 56) |= 9u;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), a2);
  if ( a3 )
  {
    FsRtlReleaseFileForCcFlush(a3);
    ObfDereferenceObjectWithTag(a3, 0x746C6644u);
  }
  return MiSegmentDelete(a1);
}
