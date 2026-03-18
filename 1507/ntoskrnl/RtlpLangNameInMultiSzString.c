/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x140591FD0
 * Callers:
 *     RtlpIsALicensedRegularLanguage @ 0x140591F70 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x14071F2C4 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14072046C (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x140720EC8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *Str1, wchar_t *Str2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v6; // rax

  v2 = 0;
  v4 = Str1;
  if ( Str1 && Str2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, Str2) )
        return 1;
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      v4 += v6 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
