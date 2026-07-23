/*
 * XREFs of ExInitializeRundownProtectionCacheAware @ 0x1404AD5C8
 * Callers:
 *     <none>
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x14009CF00 (KeGetRecommendedSharedDataAlignment.c)
 */

void __stdcall ExInitializeRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, SIZE_T RunRefSize)
{
  unsigned int v2; // esi
  ULONG RecommendedSharedDataAlignment; // r8d
  _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edx

  v2 = RunRefSize - 24;
  RecommendedSharedDataAlignment = 8;
  v4 = (_EX_RUNDOWN_REF *)&RunRefCacheAware[1];
  if ( (_DWORD)RunRefSize == 32 )
  {
    v6 = 1;
  }
  else
  {
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
    v6 = v2 / RecommendedSharedDataAlignment - 1;
    v4 = (_EX_RUNDOWN_REF *)(~(unsigned __int64)(RecommendedSharedDataAlignment - 1) & ((unsigned __int64)v4
                                                                                      + RecommendedSharedDataAlignment
                                                                                      - 1));
  }
  RunRefCacheAware->RunRefSize = RecommendedSharedDataAlignment;
  v7 = 0;
  RunRefCacheAware->RunRefs = v4;
  RunRefCacheAware->Number = v6;
  for ( RunRefCacheAware->PoolToFree = (void *)195938833;
        v7 < RunRefCacheAware->Number;
        *(unsigned __int64 *)((char *)&RunRefCacheAware->RunRefs->Count + RunRefCacheAware->RunRefSize * v8) = 0LL )
  {
    v8 = v7 % RunRefCacheAware->Number;
    ++v7;
  }
}
