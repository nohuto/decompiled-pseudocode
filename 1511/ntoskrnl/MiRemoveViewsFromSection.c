/*
 * XREFs of MiRemoveViewsFromSection @ 0x1400A8B00
 * Callers:
 *     MiConvertStaticSubsections @ 0x1400A9044 (MiConvertStaticSubsections.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v7; // rax

  v3 = 0LL;
  v4 = a3 | 1;
  do
  {
    v3 += MiDecrementSubsectionViewCount(a1, v4);
    if ( !*(_QWORD *)(a1 + 96) && (*(_BYTE *)(a1 + 34) & 1) == 0 )
      v3 += MiInsertUnusedSubsection(a1, 1);
    if ( a2 )
    {
      v7 = *(unsigned int *)(a1 + 44);
      if ( a2 <= v7 )
        return v3;
      a2 -= v7;
    }
    a1 = *(_QWORD *)(a1 + 16);
  }
  while ( a1 );
  return v3;
}
