/*
 * XREFs of RtlpIsALicensedRegularLanguage @ 0x14056152C
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1405610C0 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x14056158C (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedRegularLanguage(_QWORD *a1, wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  int v8; // ecx

  result = 0LL;
  if ( !a1 )
    return 3221225524LL;
  v5 = (wchar_t *)a1[17];
  if ( !v5 )
    goto LABEL_5;
  if ( !(unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) )
    return 3221225524LL;
  result = 0LL;
LABEL_5:
  v6 = (wchar_t *)a1[16];
  if ( v6 )
  {
    v8 = -((unsigned __int8)RtlpLangNameInMultiSzString(v6, a2) == 0);
    return v8 & 0xC0000034;
  }
  v7 = (wchar_t *)a1[19];
  if ( v7 )
  {
    v8 = -((unsigned __int8)RtlpLangNameInMultiSzString(v7, a2) != 0);
    return v8 & 0xC0000034;
  }
  return result;
}
