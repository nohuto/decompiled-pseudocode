/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x1800F40E4
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x18001146C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180011610 (RtlpIsALicensedRegularLanguage.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800F3F2C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800F4DF4 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800F5E08 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800F5ED4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x1800F6120 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = RtlpMuiRegInitAnyLanguage(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage((__int64)a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 3, v11, a6);
    }
  }
  return result;
}
