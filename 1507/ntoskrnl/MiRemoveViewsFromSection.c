/*
 * XREFs of MiRemoveViewsFromSection @ 0x14010E0A4
 * Callers:
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiConvertStaticSubsections @ 0x1400887D8 (MiConvertStaticSubsections.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rdi
  char v4; // bp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = 0LL;
  v4 = a3 | 1;
  do
  {
    v3 += MiDecrementSubsectionViewCount((unsigned int *)a1, v4);
    if ( !*(_QWORD *)(a1 + 96) && (*(_BYTE *)(a1 + 34) & 1) == 0 )
      v3 += MiInsertUnusedSubsection(v7, 1LL);
    if ( a2 )
    {
      v8 = *(unsigned int *)(a1 + 44);
      if ( a2 <= v8 )
        return v3;
      a2 -= v8;
    }
    a1 = *(_QWORD *)(a1 + 16);
  }
  while ( a1 );
  return v3;
}
