/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00D6EF0
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D6B58 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C00D6FB0 (-xxxbEnumerateRegistryFonts@@YAHH@Z.c)
 *     CloseFNTCache @ 0x1C00D703C (CloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00D7138 (ClientLoadLocalT1Fonts.c)
 *     xxxAddFontResourceW @ 0x1C0119A78 (xxxAddFontResourceW.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    v2 = 0;
    if ( gbPermanentFontsLoaded )
    {
LABEL_6:
      xxxbEnumerateRegistryFonts(0);
    }
    else
    {
      while ( !gbRemoteSession || v2 < 0x960 )
      {
        UserSessionSwitchLeaveCrit(a1, a2);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        EnterCrit(0LL, 1LL);
        ++v2;
        if ( gbPermanentFontsLoaded )
          goto LABEL_6;
      }
    }
    gbNetworkFontsLoaded = 1;
  }
  else
  {
    xxxAddFontResourceW(L"marlett.ttf");
    if ( (unsigned int)xxxbEnumerateRegistryFonts(1) && gbPermanentFontsLoaded && !gbPermanentT1FontsLoaded )
    {
      ClientLoadLocalT1Fonts();
      gbPermanentT1FontsLoaded = 1;
      CloseFNTCache();
    }
  }
  return 1LL;
}
