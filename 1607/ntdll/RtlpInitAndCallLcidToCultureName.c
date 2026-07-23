/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x180076C5C
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044984 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800F4714 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RtlpInitAndCallLcidToCultureName(_UNICODE_STRING *a1, wchar_t *a2, LCID a3)
{
  if ( a1 )
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
