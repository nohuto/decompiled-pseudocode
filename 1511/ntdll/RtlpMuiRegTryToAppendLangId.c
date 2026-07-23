/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x180019B9C
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x18003DC70 (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800EBCE8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x1800193F0 (RtlIntegerToUnicode.c)
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E20C (RtlpLangNameInMultiSzString_Size.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // r12
  DWORD v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  DWORD Lcid; // [rsp+20h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  WCHAR SourceString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+3Ah] [rbp-16h]

  SourceString = 0;
  v15 = 0LL;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      if ( *(__int16 *)(a2 + 6) <= 0 )
        return (unsigned int)-1073741595;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * *(__int16 *)(a2 + 6))));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = RtlIntegerToUnicode(v8, 0x10u, -4, (char *)&SourceString);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    RtlInitUnicodeString(&DestinationString, &SourceString);
    if ( v8 != 4096
      && *a3
      && *a3 <= a5
      && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, DestinationString.Buffer) )
    {
      return v9;
    }
    v10 = v7 + (DestinationString.Length >> 1) + 1;
    if ( a4 && (unsigned int)v7 < v10 )
    {
      if ( v10 < a5 )
      {
        memmove(&a4[v7], DestinationString.Buffer, DestinationString.Length);
        a4[v10 - 1] = 0;
LABEL_15:
        *a3 = v10;
        return v9;
      }
    }
    else if ( v10 < a5 )
    {
      goto LABEL_15;
    }
    if ( a4 )
      v9 = -1073741789;
    goto LABEL_15;
  }
  return 3221225485LL;
}
