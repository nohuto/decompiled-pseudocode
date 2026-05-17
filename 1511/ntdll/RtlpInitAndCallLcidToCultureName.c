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

char __fastcall RtlpInitAndCallLcidToCultureName(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
