/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x140560B80
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140560888 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x140140150 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlpIsALicensedRegularLanguage @ 0x140560FEC (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1405614BC (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14057C950 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpIsALicensedLIPLanguage @ 0x1406E6500 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1406E79F0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x1406E7C34 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
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
      goto LABEL_4;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_4:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage(a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 24, v11, a6);
    }
  }
  return result;
}
