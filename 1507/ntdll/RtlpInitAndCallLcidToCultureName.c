/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x180067018
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001ED84 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180066EA0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E6AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800E72D4 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800E7BB4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800E999C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RtlpInitAndCallLcidToCultureName(_UNICODE_STRING *a1, unsigned __int16 *a2, LCID a3)
{
  if ( a1 )
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
