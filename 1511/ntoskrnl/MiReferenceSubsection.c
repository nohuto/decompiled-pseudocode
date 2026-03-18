/*
 * XREFs of MiReferenceSubsection @ 0x1400A8AA8
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiFlushAcquire @ 0x1400985E0 (MiFlushAcquire.c)
 *     MiUpControlAreaRefs @ 0x14009A908 (MiUpControlAreaRefs.c)
 *     MiComputeDataFlushRange @ 0x1400A889C (MiComputeDataFlushRange.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // esi

  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  result = MiIncrementSubsectionViewCount(a1, a2);
  v4 = result;
  if ( (int)result > 1 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a1);
    *(_WORD *)(a1 + 32) |= 1u;
    return v4;
  }
  return result;
}
