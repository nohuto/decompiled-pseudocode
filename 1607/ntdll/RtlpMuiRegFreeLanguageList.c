/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x180045F14
 * Callers:
 *     InitializeTEBUserLangList @ 0x180012660 (InitializeTEBUserLangList.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180013698 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180013860 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x180041058 (LdrpMergeLangFallbackLists.c)
 *     RtlCleanUpTEBLangLists @ 0x1800705C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x1800708D0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EB0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079C00 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x180080EA4 (RtlpUpdateTEBLanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A20 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeLanguageList(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
