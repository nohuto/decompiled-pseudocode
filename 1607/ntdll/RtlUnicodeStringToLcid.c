/*
 * XREFs of RtlUnicodeStringToLcid @ 0x1800E6118
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800E5B80 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6D20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x18006AEA0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     iswctype @ 0x18009A240 (iswctype.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlIsValidLocaleName @ 0x1800EEF00 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlUnicodeStringToLcid(PUNICODE_STRING String, PULONG Value)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r14
  LCID v8; // ecx
  _UNICODE_STRING Stringa; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v11[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset(v11, 0, 0xAAuLL);
  if ( !String )
    return (unsigned int)-1073741811;
  if ( !Value )
    return (unsigned int)-1073741811;
  v5 = String->Length >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( v5 )
  {
    v7 = 0LL;
    while ( iswctype(String->Buffer[v7], 0x80u) )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  if ( RtlUnicodeStringToInteger(String, 0x10u, Value) < 0 )
    return (unsigned int)-1073741811;
  v8 = *Value;
  Stringa.Buffer = (wchar_t *)v11;
  *(_DWORD *)&Stringa.Length = 11141290;
  if ( !RtlLCIDToCultureName(v8, &Stringa) || !RtlIsValidLocaleName(Stringa.Buffer, 2u) )
    return (unsigned int)-1073741811;
  return v4;
}
