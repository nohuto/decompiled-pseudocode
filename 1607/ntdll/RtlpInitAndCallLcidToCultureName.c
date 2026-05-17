/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x180076C6C
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044194 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180076AF4 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DF4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800F4714 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
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
