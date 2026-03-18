/*
 * XREFs of ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x180018DEC
 * Callers:
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180018BE4 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // r9
  int v4; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r11d

  v2 = 0LL;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a1 + 8);
    if ( !v3
      && (*(int *)(a1 + 36) <= 0 || *(int *)(a1 + 36) > 2)
      && (*(int *)(a1 + 48) <= 0 || *(int *)(a1 + 48) > 2)
      && (*(int *)(a2 + 36) <= 0 || *(int *)(a2 + 36) > 2)
      && (*(int *)(a2 + 48) <= 0 || *(int *)(a2 + 48) > 2) )
    {
      v4 = *(_DWORD *)(a1 + 56);
      if ( v4 == DisplayId::None || *(_DWORD *)(a2 + 56) == v4 )
        v2 = 1LL;
    }
    if ( *(_DWORD *)(a1 + 56) == *(_DWORD *)(a2 + 56)
      && *(_DWORD *)(a1 + 36) == *(_DWORD *)(a2 + 36)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48)
      && v3 == *(_BYTE *)(a2 + 8)
      && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a2 + 12) )
    {
      if ( v3 )
      {
        v6 = (_DWORD *)(a1 + 16);
        v7 = (_DWORD *)(a2 + 16);
        if ( v6[2] > *v6 )
        {
          v8 = v6[3];
          if ( v8 > v6[1] && v7[2] > *v7 )
          {
            v9 = v7[3];
            if ( v9 > v7[1] && v6[2] > *v7 && v7[2] > *v6 && v8 > v7[1] && v9 > v6[1] )
              LODWORD(v2) = ((unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                                                v6,
                                                v7,
                                                v2) != 0)
                          + 2;
          }
        }
      }
      else
      {
        LODWORD(v2) = 3;
      }
    }
  }
  return (unsigned int)v2;
}
