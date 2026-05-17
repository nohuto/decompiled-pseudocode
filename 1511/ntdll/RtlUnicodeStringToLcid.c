/*
 * XREFs of RtlUnicodeStringToLcid @ 0x1800DCE2C
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800DDA30 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     iswctype @ 0x180098E80 (iswctype.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlIsValidLocaleName @ 0x1800E5C40 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlUnicodeStringToLcid(unsigned __int16 *a1, int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r14
  unsigned int v8; // ecx
  int v10; // [rsp+20h] [rbp-F8h] BYREF
  PCWSTR SourceString; // [rsp+28h] [rbp-F0h]
  _WORD v12[88]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset(v12, 0, 170);
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v5 = *a1 >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( v5 )
  {
    v7 = 0LL;
    while ( iswctype(*(_WORD *)(v7 + *((_QWORD *)a1 + 1)), 0x80u) )
    {
      ++v6;
      v7 += 2LL;
      if ( v6 >= v5 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  if ( (int)RtlUnicodeStringToInteger(a1, 0x10u, a2) < 0 )
    return (unsigned int)-1073741811;
  v8 = *a2;
  SourceString = v12;
  v10 = 11141290;
  if ( !RtlLCIDToCultureName(v8, (__int64)&v10) || !(unsigned __int8)RtlIsValidLocaleName(SourceString) )
    return (unsigned int)-1073741811;
  return v4;
}
