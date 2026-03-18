/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x14075E5AC
 * Callers:
 *     BgDisplayProgressIndicator @ 0x14075E2BC (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x14075C1F8 (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x14075C894 (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x14075C96C (RaspClearCache.c)
 *     LogFwStat @ 0x14075E428 (LogFwStat.c)
 *     TxtpDestroyCacheEntry @ 0x14075E7CC (TxtpDestroyCacheEntry.c)
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
  if ( !a1 && !byte_140356CF7 )
    return 0LL;
  LOBYTE(a1) = 0;
  if ( (dword_140323CF0 & 0x100000) != 0 )
    a1 = (dword_140323CF0 & 0x1000) != 0;
  if ( !v1 )
  {
    v4 = dword_140323CF0 & 0xC00;
    if ( (_DWORD)v4 != 3072 && !a1 )
      AnFwpDisableProgressTimer(a1, v4);
    word_140316618 = -7989;
    BgpTxtDisplayCharacter(qword_140323D80, 57547LL, 0, 0LL, 0LL, v7);
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
    dword_140320C30 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_140356CF7 )
  {
    if ( a1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_140323D80 )
  {
    if ( (dword_140323CF0 & 0x40000) == 0 )
    {
      byte_140356CF7 = 1;
      if ( !a1 )
      {
        word_140316618 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_140316618; i <= 0xE0CBu; i = ++word_140316618 )
          BgpTxtDisplayCharacter(qword_140323D80, i, 1, 0LL, 0LL, v7);
        word_140316618 = -7989;
        BgpTxtDisplayCharacter(qword_140323D80, 57547LL, 0, 0LL, 0LL, v7);
        qword_1403539B0 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&stru_14036B190, NotificationTimer);
        KeInitializeDpc(&stru_14036B150, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_14036B190, 0LL, 0x1Eu, 0, &stru_14036B150);
        return 0LL;
      }
      qword_1403539B0 = 0LL;
      word_140316618 = -8111;
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
