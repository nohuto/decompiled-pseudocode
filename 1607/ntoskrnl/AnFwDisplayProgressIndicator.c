/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140727494
 * Callers:
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x1407253F8 (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x140725934 (RaspClearCache.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1)
{
  bool v1; // al
  unsigned __int16 i; // ax
  _UNKNOWN **v4; // rax
  __int64 v5; // rcx
  int v6; // [rsp+28h] [rbp-20h]

  if ( !a1 && !byte_140328C50 )
    return 0LL;
  v1 = 0;
  if ( (dword_1402F9F90 & 0x100000) != 0 )
    v1 = (dword_1402F9F90 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_1402F9F90 & 0xC00) != 0xC00 && !v1 )
      AnFwpDisableProgressTimer();
    word_1402F4E60 = -7989;
    BgpTxtDisplayCharacter(qword_1402FA040, 57547LL, 0, 0LL, 0LL, v6);
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
      TxtpDestroyCacheEntry(v4);
      v4 = (_UNKNOWN **)TxtpTextCache;
      v5 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v5 + 8) != TxtpTextCache )
        __fastfail(3u);
    }
    dword_1402F36F0 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140328C50 )
  {
    if ( v1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_1402FA040 )
  {
    if ( (dword_1402F9F90 & 0x40000) == 0 )
    {
      byte_140328C50 = 1;
      if ( !v1 )
      {
        word_1402F4E60 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_1402F4E60; i <= 0xE0CBu; i = ++word_1402F4E60 )
          BgpTxtDisplayCharacter(qword_1402FA040, i, 1, 0LL, 0LL, v6);
        word_1402F4E60 = -7989;
        BgpTxtDisplayCharacter(qword_1402FA040, 57547LL, 0, 0LL, 0LL, v6);
        qword_140328C58 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_140340460, NotificationTimer);
        KeInitializeDpc(&stru_1403403E0, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_140340460, 0LL, 0x1Eu, 0, &stru_1403403E0);
        return 0LL;
      }
      qword_140328C58 = 0LL;
      word_1402F4E60 = -8111;
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
