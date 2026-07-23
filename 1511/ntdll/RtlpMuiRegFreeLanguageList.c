/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x18001D9B0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18001C3DC (LdrpMergeLangFallbackLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x180039B90 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180039EE8 (InitializeTEBUserLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003B530 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x18003EEF0 (RtlpUpdateTEBLanguage.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180070DA0 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x18007A9E0 (RtlCleanUpTEBLangLists.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180084820 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
