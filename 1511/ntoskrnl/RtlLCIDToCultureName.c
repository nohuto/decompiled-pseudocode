/*
 * XREFs of RtlLCIDToCultureName @ 0x14064993C
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14013A9EC (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x140459534 (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14051C830 (PnpSetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405397F4 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140539E84 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14053EC08 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14069F434 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14069FCB8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406A084C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1406A0CAC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, (char *)word_140333040, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140333040);
          return 1;
        }
      }
    }
  }
  return v2;
}
