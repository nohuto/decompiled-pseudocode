/*
 * XREFs of AnFwpDisableProgressTimer @ 0x14072586C
 * Callers:
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14072ACB4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     RaspClearCache @ 0x140725934 (RaspClearCache.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 */

void AnFwpDisableProgressTimer()
{
  bool v0; // cl
  _UNKNOWN **v1; // rax
  __int64 v2; // rcx

  if ( byte_140328C50 )
  {
    v0 = 0;
    if ( (dword_1402F9F90 & 0x100000) != 0 )
      v0 = (dword_1402F9F90 & 0x1000) != 0;
    byte_140328C50 = 0;
    if ( (dword_1402F9F90 & 0xC00) != 0xC00 && !v0 )
      KeCancelTimer(&stru_140340460);
    v1 = (_UNKNOWN **)TxtpTextCache;
    v2 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v2 + 8) != TxtpTextCache )
      __fastfail(3u);
    while ( 1 )
    {
      TxtpTextCache = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &TxtpTextCache;
      if ( v1 == &TxtpTextCache )
        break;
      TxtpDestroyCacheEntry(v1);
      v1 = (_UNKNOWN **)TxtpTextCache;
      v2 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v2 + 8) != TxtpTextCache )
        __fastfail(3u);
    }
    dword_1402F36F0 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
  }
}
