/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x18003DF54
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18001D714 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003DD44 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800931CC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800934CC (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800EB994 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800EDC6C (_RtlpMuiRegValidateInstalled.c)
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
