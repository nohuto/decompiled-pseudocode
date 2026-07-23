/*
 * XREFs of _MuiRegAllocArray @ 0x18004485C
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180044984 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D70 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008DB24 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180094AA0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180094DE4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  PVOID result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
