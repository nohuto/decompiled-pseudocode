/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x180011680
 * Callers:
 *     RtlpIsALicensedLIPLanguage @ 0x18001146C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180011610 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800E6224 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1800F5AA0 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1800F6914 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  const wchar_t *v3; // rbx
  __int64 v4; // rcx

  v3 = String1;
  if ( String1 && String2 )
  {
    while ( *v3 )
    {
      if ( !wcsicmp(v3, String2) )
        return 1;
      v4 = -1LL;
      while ( v3[++v4] != 0 )
        ;
      v3 += v4 + 1;
      if ( !v3 )
        return 0;
    }
  }
  return 0;
}
