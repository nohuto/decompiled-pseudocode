/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x180014880
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x1800147AC (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800F4A68 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x180014BA0 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E6F8 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
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
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, &SourceString);
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
