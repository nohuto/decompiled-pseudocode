/*
 * XREFs of RtlIpv6AddressToStringExA @ 0x140214050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlIpv6AddressToStringA @ 0x140213DDC (RtlIpv6AddressToStringA.c)
 */

NTSTATUS __stdcall RtlIpv6AddressToStringExA(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  char *v9; // rdx
  char *v10; // rax
  char *v11; // rbx
  ULONG v12; // ebx
  bool v13; // cf
  char DstBuf[65]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v16[15]; // [rsp+61h] [rbp-57h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v9 = DstBuf;
  if ( Port )
    v9 = &DstBuf[sprintf_s(DstBuf, 0x41uLL, "[")];
  v10 = RtlIpv6AddressToStringA(Address, v9);
  v11 = v10;
  if ( ScopeId )
    v11 = &v10[sprintf_s(v10, v16 - v10, "%%%u", ScopeId)];
  if ( Port )
    LODWORD(v11) = sprintf_s(v11, v16 - v11, "]:%u", (unsigned __int16)__ROR2__(Port, 8)) + (_DWORD)v11;
  v12 = (_DWORD)v11 - (unsigned int)DstBuf + 1;
  v13 = *AddressStringLength < v12;
  *AddressStringLength = v12;
  if ( v13 )
    return -1073741811;
  memmove(AddressString, DstBuf, v12);
  return 0;
}
