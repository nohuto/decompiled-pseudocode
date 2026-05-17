/*
 * XREFs of _MuiRegAllocArray @ 0x18004486C
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044994 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D80 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB34 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DF4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
