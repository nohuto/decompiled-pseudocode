/*
 * XREFs of RtlCanonicalizeDomainName @ 0x180055610
 * Callers:
 *     RtlEqualDomainName @ 0x180055590 (RtlEqualDomainName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     RtlIpv6StringToAddressExW @ 0x180055810 (RtlIpv6StringToAddressExW.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x1800562A0 (RtlIpv4StringToAddressExW.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     RtlIdnToUnicode @ 0x180056690 (RtlIdnToUnicode.c)
 *     RtlIpv6AddressToStringExW @ 0x18005C000 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x180081820 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DE0 (__report_rangecheckfailure.c)
 *     towlower @ 0x18009C440 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(__int64 a1, unsigned __int16 *a2, BOOLEAN a3)
{
  LONG result; // eax
  unsigned int v7; // edi
  wint_t *v8; // rbx
  __int64 v9; // rsi
  USHORT v10; // dx
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG AddressStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v17[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[512]; // [rsp+260h] [rbp+160h] BYREF
  char v19; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  *(_QWORD *)((char *)&v15 + 2) = 0LL;
  v14 = 256;
  *((_QWORD *)&v15 + 1) = &v19;
  LODWORD(v15) = 33554942;
  RtlCopyUnicodeString((unsigned __int16 *)&v15, a2);
  if ( (_WORD)v15 == WORD1(v15) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(*((PCWSTR *)&v15 + 1), &Address, &ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
    {
      if ( Address.u.Word[0]
        || __PAIR32__(Address.u.Word[1], 0) != Address.u.Word[2]
        || __PAIR32__(Address.u.Word[3], 0) != Address.u.Word[4]
        || Address.u.Word[5] != 0xFFFF
        || ScopeId )
      {
        result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v17, &AddressStringLength);
        goto LABEL_18;
      }
      ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_27:
      result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, v10, v17, &AddressStringLength);
LABEL_18:
      if ( result < 0 )
        return result;
      return (unsigned __int8)RtlCreateUnicodeString(a1, v17) == 0 ? 0xC0000017 : 0;
    }
  }
  if ( RtlIpv4StringToAddressExW(*((PCWSTR *)&v15 + 1), a3, (struct in_addr *)&ScopeId, Port) >= 0 )
  {
    v10 = Port[0];
    if ( !Port[0] )
      goto LABEL_27;
  }
  result = RtlpNameprepAsciiWorker(0LL, *((_QWORD *)a2 + 1), *a2 >> 1, v18, &v14, 1);
  if ( result >= 0 )
  {
    v7 = v14;
    if ( v14 )
    {
      v8 = (wint_t *)v18;
      v9 = v14;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0LL, v18, v7, v17, &AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
          _report_rangecheckfailure();
        v17[AddressStringLength] = 0;
        return (unsigned __int8)RtlCreateUnicodeString(a1, v17) == 0 ? 0xC0000017 : 0;
      }
      return -1073740010;
    }
  }
  return result;
}
