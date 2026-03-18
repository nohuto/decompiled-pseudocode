/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x1406DB564
 * Callers:
 *     BgDisplayProgressIndicator @ 0x1406DB274 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x1406D9008 (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x1406D9924 (RaspClearCache.c)
 *     LogFwStat @ 0x1406DB3E0 (LogFwStat.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(_BOOL8 a1)
{
  bool v1; // r9
  unsigned __int16 i; // ax
  __int64 v4; // rdx
  _UNKNOWN **v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+28h] [rbp-20h]

  v1 = a1;
  if ( !a1 && !byte_1403069E7 )
    return 0LL;
  LOBYTE(a1) = 0;
  if ( (dword_1402D4BB0 & 0x100000) != 0 )
    a1 = (dword_1402D4BB0 & 0x1000) != 0;
  if ( !v1 )
  {
    v4 = dword_1402D4BB0 & 0xC00;
    if ( (_DWORD)v4 != 3072 && !a1 )
      AnFwpDisableProgressTimer(a1, v4);
    word_1402C7540 = -7989;
    BgpTxtDisplayCharacter(qword_1402D4C40, 57547LL, 0, 0LL, 0LL, v7);
    v5 = (_UNKNOWN **)TxtpTextCache;
    v6 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v6 + 8) != TxtpTextCache )
      __fastfail(3u);
    while ( 1 )
    {
      TxtpTextCache = (_UNKNOWN *)v6;
      *(_QWORD *)(v6 + 8) = &TxtpTextCache;
      if ( v5 == &TxtpTextCache )
        break;
      TxtpDestroyCacheEntry(v5);
      v5 = (_UNKNOWN **)TxtpTextCache;
      v6 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v6 + 8) != TxtpTextCache )
        __fastfail(3u);
    }
    dword_1402D1A50 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_1403069E7 )
  {
    if ( a1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_1402D4C40 )
  {
    if ( (dword_1402D4BB0 & 0x40000) == 0 )
    {
      byte_1403069E7 = 1;
      if ( !a1 )
      {
        word_1402C7540 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_1402C7540; i <= 0xE0CBu; i = ++word_1402C7540 )
          BgpTxtDisplayCharacter(qword_1402D4C40, i, 1, 0LL, 0LL, v7);
        word_1402C7540 = -7989;
        BgpTxtDisplayCharacter(qword_1402D4C40, 57547LL, 0, 0LL, 0LL, v7);
        qword_140305C30 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_14031ADA0, NotificationTimer);
        KeInitializeDpc(&stru_14031AD60, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_14031ADA0, 0LL, 0x1Eu, 0, &stru_14031AD60);
        return 0LL;
      }
      qword_140305C30 = 0LL;
      word_1402C7540 = -8111;
LABEL_7:
      AnFwpProgressAnimationManual();
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
