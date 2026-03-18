/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00EADD0
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EAA84 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C00EAE4C (-xxxbEnumerateRegistryFonts@@YAHH@Z.c)
 *     xxxAddFontResourceW @ 0x1C00EB04C (xxxAddFontResourceW.c)
 *     CloseFNTCache @ 0x1C00EB248 (CloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00EB344 (ClientLoadLocalT1Fonts.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  unsigned int v2; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    v2 = 0;
    if ( gbPermanentFontsLoaded )
    {
LABEL_8:
      xxxbEnumerateRegistryFonts(0);
    }
    else
    {
      while ( !gbRemoteSession || v2 < 0x960 )
      {
        if ( gdwInAtomicOperation )
        {
          a1 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        EnterCrit(0LL, 1LL);
        ++v2;
        if ( gbPermanentFontsLoaded )
          goto LABEL_8;
      }
    }
    gbNetworkFontsLoaded = 1;
  }
  else
  {
    xxxAddFontResourceW(L"marlett.ttf");
    if ( (unsigned int)xxxbEnumerateRegistryFonts(1) && !gbPermanentT1FontsLoaded && gbPermanentFontsLoaded )
    {
      ClientLoadLocalT1Fonts();
      gbPermanentT1FontsLoaded = 1;
      CloseFNTCache();
    }
  }
  return 1LL;
}
