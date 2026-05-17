/*
 * XREFs of LdrpCreateLangFallbackList @ 0x18001DA28
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18001C0BC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18001C2B0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006C270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CFE0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18001DA70 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 LanguageList; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  LanguageList = RtlpMuiRegCreateLanguageList(a3, a2, v6);
  *a1 = LanguageList;
  return LanguageList == 0 ? 0xC0000017 : 0;
}
