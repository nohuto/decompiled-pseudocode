/*
 * XREFs of AnFwpDisableProgressTimer @ 0x1406D984C
 * Callers:
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1406DF258 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     RaspClearCache @ 0x1406D9924 (RaspClearCache.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 */

void __fastcall AnFwpDisableProgressTimer(__int64 a1, _BOOL8 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx

  if ( byte_1403069E7 )
  {
    LOBYTE(a2) = 0;
    if ( (dword_1402D4BB0 & 0x100000) != 0 )
      a2 = (dword_1402D4BB0 & 0x1000) != 0;
    byte_1403069E7 = 0;
    if ( (dword_1402D4BB0 & 0xC00) != 0xC00 && !a2 )
      KeCancelTimer(&stru_14031ADA0);
    v2 = (_UNKNOWN **)TxtpTextCache;
    v3 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v3 + 8) != TxtpTextCache )
      __fastfail(3u);
    while ( 1 )
    {
      TxtpTextCache = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &TxtpTextCache;
      if ( v2 == &TxtpTextCache )
        break;
      TxtpDestroyCacheEntry(v2);
      v2 = (_UNKNOWN **)TxtpTextCache;
      v3 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v3 + 8) != TxtpTextCache )
        __fastfail(3u);
    }
    dword_1402D1A50 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(v3, a2);
  }
}
