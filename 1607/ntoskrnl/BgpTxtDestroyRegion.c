/*
 * XREFs of BgpTxtDestroyRegion @ 0x140728928
 * Callers:
 *     BgpDisplayCharacterGetContext @ 0x140728670 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140728810 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140725934 (RaspClearCache.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
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
      dword_1402F36F0 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
