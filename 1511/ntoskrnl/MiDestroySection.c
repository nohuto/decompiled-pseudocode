/*
 * XREFs of MiDestroySection @ 0x1401070FC
 * Callers:
 *     MiCleanSection @ 0x140107088 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDrainControlAreaWrites @ 0x14000C580 (MiDrainControlAreaWrites.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiClearFilePointer @ 0x1400EA004 (MiClearFilePointer.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
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
    ObfDereferenceObject(a3);
  }
  return MiSegmentDelete(a1);
}
