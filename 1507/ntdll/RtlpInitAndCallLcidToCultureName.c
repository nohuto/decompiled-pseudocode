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

char __fastcall RtlpInitAndCallLcidToCultureName(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
