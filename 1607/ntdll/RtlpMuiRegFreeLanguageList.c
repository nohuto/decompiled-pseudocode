/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180045F04
 * Callers:
 *     InitializeTEBUserLangList @ 0x180012650 (InitializeTEBUserLangList.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180013688 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180013850 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x180041048 (LdrpMergeLangFallbackLists.c)
 *     RtlCleanUpTEBLangLists @ 0x1800705B0 (RtlCleanUpTEBLangLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708C0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EA0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079BF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0D0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x180080E94 (RtlpUpdateTEBLanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A10 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
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
