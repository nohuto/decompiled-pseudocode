/*
 * XREFs of BgpTxtDestroyRegion @ 0x1406DC840
 * Callers:
 *     BgpDisplayCharacterGetContext @ 0x1406DC5A0 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1406DC728 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x1406D9924 (RaspClearCache.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _UNKNOWN **v4; // rax
  __int64 v5; // rcx

  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      v4 = (_UNKNOWN **)TxtpTextCache;
      v5 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v5 + 8) != TxtpTextCache )
        __fastfail(3u);
      while ( 1 )
      {
        TxtpTextCache = (_UNKNOWN *)v5;
        *(_QWORD *)(v5 + 8) = &TxtpTextCache;
        if ( v4 == &TxtpTextCache )
          break;
        TxtpDestroyCacheEntry((__int64)v4);
        v4 = (_UNKNOWN **)TxtpTextCache;
        v5 = *(_QWORD *)TxtpTextCache;
        if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v5 + 8) != TxtpTextCache )
          __fastfail(3u);
      }
      dword_1402D1A50 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
