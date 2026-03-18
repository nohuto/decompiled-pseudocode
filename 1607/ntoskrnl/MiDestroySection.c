/*
 * XREFs of MiDestroySection @ 0x140111D20
 * Callers:
 *     MiCleanSection @ 0x140111CAC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1401DE4D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     MiClearFilePointer @ 0x14008FE24 (MiClearFilePointer.c)
 *     MiDrainControlAreaWrites @ 0x1400901EC (MiDrainControlAreaWrites.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042BEA0 (FsRtlReleaseFileForCcFlush.c)
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
