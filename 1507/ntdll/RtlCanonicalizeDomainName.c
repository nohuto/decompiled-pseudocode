/*
 * XREFs of RtlCanonicalizeDomainName @ 0x18005D9C0
 * Callers:
 *     RtlEqualDomainName @ 0x18005D940 (RtlEqualDomainName.c)
 * Callees:
 *     RtlIpv6AddressToStringExW @ 0x18000F9F0 (RtlIpv6AddressToStringExW.c)
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     RtlIpv6StringToAddressExW @ 0x18005DBC0 (RtlIpv6StringToAddressExW.c)
 *     RtlpNameprepAsciiWorker @ 0x18005E190 (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x18005E5A0 (RtlIpv4StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x18005E8F0 (RtlIdnToUnicode.c)
 *     RtlIpv4AddressToStringExW @ 0x180072060 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180084230 (__report_rangecheckfailure.c)
 *     towlower @ 0x1800898F0 (towlower.c)
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
        goto LABEL_17;
      }
      ScopeId = v17;
LABEL_29:
      result = RtlIpv4AddressToStringExW(
                 (const struct in_addr *)&ScopeId,
                 v10,
                 AddressString,
                 (PULONG)&DestinationStringLength);
LABEL_17:
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
