/*
 * XREFs of RtlCanonicalizeDomainName @ 0x180069350
 * Callers:
 *     RtlEqualDomainName @ 0x1800692D0 (RtlEqualDomainName.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x180019A70 (RtlCopyUnicodeString.c)
 *     RtlIpv6AddressToStringExW @ 0x180049330 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6StringToAddressExW @ 0x180069550 (RtlIpv6StringToAddressExW.c)
 *     RtlpNameprepAsciiWorker @ 0x180069B44 (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x180069F50 (RtlIpv4StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 *     RtlIpv4AddressToStringExW @ 0x18007E180 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     towlower @ 0x18009B0A0 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, const UNICODE_STRING *a2, BOOLEAN a3)
{
  LONG result; // eax
  LONG v7; // edi
  WCHAR *v8; // rbx
  __int64 v9; // rsi
  USHORT v10; // dx
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  LONG SourceStringLength; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v16[6]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v17; // [rsp+5Ch] [rbp-A4h]
  WCHAR AddressString[256]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[256]; // [rsp+260h] [rbp+160h] BYREF
  char v20; // [rsp+460h] [rbp+360h] BYREF

  DestinationStringLength = 256;
  *(_QWORD *)&DestinationStringa.MaximumLength = 0LL;
  SourceStringLength = 256;
  DestinationStringa.Buffer = (unsigned __int16 *)&v20;
  *(_DWORD *)&DestinationStringa.Length = 33554942;
  RtlCopyUnicodeString(&DestinationStringa, a2);
  if ( DestinationStringa.Length == DestinationStringa.MaximumLength )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(DestinationStringa.Buffer, (struct in6_addr *)v16, &ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
    {
      if ( v16[0] || v16[1] || v16[2] || v16[3] || v16[4] || v16[5] != 0xFFFF || ScopeId )
      {
        result = RtlIpv6AddressToStringExW(
                   (const struct in6_addr *)v16,
                   ScopeId,
                   0,
                   AddressString,
                   (PULONG)&DestinationStringLength);
        goto LABEL_18;
      }
      ScopeId = v17;
LABEL_29:
      result = RtlIpv4AddressToStringExW(
                 (const struct in_addr *)&ScopeId,
                 v10,
                 AddressString,
                 (PULONG)&DestinationStringLength);
LABEL_18:
      if ( result < 0 )
        return result;
      return RtlCreateUnicodeString(DestinationString, AddressString) == 0 ? 0xC0000017 : 0;
    }
  }
  if ( RtlIpv4StringToAddressExW(DestinationStringa.Buffer, a3, (struct in_addr *)&ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
      goto LABEL_29;
  }
  result = RtlpNameprepAsciiWorker(0LL, a2->Buffer, a2->Length >> 1, SourceString, &SourceStringLength, 1);
  if ( result >= 0 )
  {
    v7 = SourceStringLength;
    if ( SourceStringLength )
    {
      v8 = SourceString;
      v9 = (unsigned int)SourceStringLength;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, SourceString, v7, AddressString, &DestinationStringLength);
    if ( result >= 0 )
    {
      if ( DestinationStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)(unsigned int)DestinationStringLength >= 0x200 )
          _report_rangecheckfailure();
        AddressString[DestinationStringLength] = 0;
        return RtlCreateUnicodeString(DestinationString, AddressString) == 0 ? 0xC0000017 : 0;
      }
      return -1073740010;
    }
  }
  return result;
}
