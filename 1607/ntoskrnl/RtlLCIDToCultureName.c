/*
 * XREFs of RtlLCIDToCultureName @ 0x140688F04
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x140140288 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1404F7610 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14054D39C (PnpSetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140560D70 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405613F4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405702EC (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E688C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E70F8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7C88 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1406E80D4 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140081B44 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x1401323C4 (DownLevelLangIDToLanguageName.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140356030, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, word_140356030);
          return 1;
        }
      }
    }
  }
  return v2;
}
