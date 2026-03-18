/*
 * XREFs of MiReferenceSubsection @ 0x14008595C
 * Callers:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 *     MiFlushAcquire @ 0x14011997C (MiFlushAcquire.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v3 = MiIncrementSubsectionViewCount(a1, a2);
  if ( !v3 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(a1);
  *(_WORD *)(a1 + 32) |= 1u;
  return v3;
}
