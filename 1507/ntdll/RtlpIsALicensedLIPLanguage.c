/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x18006DDE4
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001CE50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800669C0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1800E6884 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x18001D000 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t *v5; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(wchar_t **)(a1 + 136);
  if ( v4 && RtlpLangNameInMultiSzString(v4, a2) )
    return 3221225524LL;
  v5 = *(wchar_t **)(a1 + 152);
  result = 0LL;
  if ( v5 )
    return RtlpLangNameInMultiSzString(v5, a2) != 0 ? 0xC0000034 : 0;
  return result;
}
