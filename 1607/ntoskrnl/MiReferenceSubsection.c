/*
 * XREFs of MiReferenceSubsection @ 0x1400216EC
 * Callers:
 *     MiComputeDataFlushRange @ 0x1400214D8 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x1400A4478 (MiFlushAcquire.c)
 *     MiUpControlAreaRefs @ 0x14010A768 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x1401EAAB4 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // esi

  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  result = MiIncrementSubsectionViewCount();
  v4 = result;
  if ( (int)result > 1 )
  {
    if ( (*(_BYTE *)(v3 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection();
    *(_WORD *)(a1 + 32) |= 1u;
    return v4;
  }
  return result;
}
