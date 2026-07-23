/*
 * XREFs of RtlLCIDToCultureName @ 0x140688FE8
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1401407F8 (RtlpGetNameFromLangInfoNode.c)
 *     PnpGetDevicePropertyData @ 0x1404DA59C (PnpGetDevicePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x14054D73C (PnpSetDevicePropertyData.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140561934 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14057082C (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E388 (PnpGetDeviceInterfacePropertyData.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E69C4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E7230 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7DC0 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1406E820C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     DownLevelLangIDToLanguageName @ 0x140132934 (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140356030, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140356030);
          return 1;
        }
      }
    }
  }
  return v2;
}
