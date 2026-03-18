/*
 * XREFs of AnFwpDisableProgressTimer @ 0x14075C894
 * Callers:
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407622D4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     RaspClearCache @ 0x14075C96C (RaspClearCache.c)
 *     TxtpDestroyCacheEntry @ 0x14075E7CC (TxtpDestroyCacheEntry.c)
 */

void __fastcall AnFwpDisableProgressTimer(__int64 a1, _BOOL8 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx

  if ( byte_140356CF7 )
  {
    LOBYTE(a2) = 0;
    if ( (dword_140323CF0 & 0x100000) != 0 )
      a2 = (dword_140323CF0 & 0x1000) != 0;
    byte_140356CF7 = 0;
    if ( (dword_140323CF0 & 0xC00) != 0xC00 && !a2 )
      KeCancelTimer(&stru_14036B190);
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
    dword_140320C30 = 0;
    if ( RasterizerInitialized )
      RaspClearCache(v3, a2);
  }
}
