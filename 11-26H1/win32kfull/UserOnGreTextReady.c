/*
 * XREFs of UserOnGreTextReady @ 0x1400CBFE0
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CBA10 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxLW_LoadFonts @ 0x1400CC240 (xxxLW_LoadFonts.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1400CE450 (SetMinMetrics.c)
 */

__int64 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v3; // rax
  __int64 v4; // rcx
  int v5; // esi
  struct _UNICODE_STRING *v6; // rdi
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  v12 = -1LL;
  v11 = 0LL;
  EnterCrit(1LL, 0LL);
  LogPixels = DrvGetLogPixels(v1, v0);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  v3 = (struct _UNICODE_STRING *)CreateProfileUserName(&v11);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = xxxSetWindowNCMetrics(v3, 0LL);
    SetMinMetrics(v6);
    LOBYTE(v5) = v7 != 0;
    v8 = (unsigned int)SetIconMetrics(v6) != 0 ? v5 : 0;
    UserSessionSwitchLeaveCrit(v9);
    if ( v12 != -1 )
      PopAndFreeAlwaysW32ThreadLock(&v11);
    return v8;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v4);
    if ( v12 != -1 )
      PopAndFreeAlwaysW32ThreadLock(&v11);
    return 0LL;
  }
}
