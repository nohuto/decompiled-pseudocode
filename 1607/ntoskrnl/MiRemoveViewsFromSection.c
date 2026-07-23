/*
 * XREFs of MiRemoveViewsFromSection @ 0x140022364
 * Callers:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiConvertStaticSubsections @ 0x1400A0534 (MiConvertStaticSubsections.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiRemoveSystemCacheReferences @ 0x1401E6C20 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = 0LL;
  v4 = a3 | 1;
  do
  {
    v3 += MiDecrementSubsectionViewCount(a1, v4);
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
