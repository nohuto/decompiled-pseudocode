/*
 * XREFs of MiReferenceSubsection @ 0x140021B6C
 * Callers:
 *     MiComputeDataFlushRange @ 0x140021958 (MiComputeDataFlushRange.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiFlushAcquire @ 0x1400A5F00 (MiFlushAcquire.c)
 *     MiUpControlAreaRefs @ 0x14010C9E8 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x1401EAC88 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14002CF20 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x1400904A4 (MiRemoveUnusedSubsection.c)
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
