/*
 * XREFs of RtlIpv6AddressToStringExW @ 0x140214298
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6AddressToStringW @ 0x14013041C (RtlIpv6AddressToStringW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __stdcall RtlIpv6AddressToStringExW(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  wchar_t *v9; // rdx
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  ULONG v12; // ebx
  bool v13; // cf
  wchar_t Dst[65]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v16[14]; // [rsp+A2h] [rbp-56h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v9 = Dst;
  if ( Port )
    v9 = &Dst[swprintf_s(Dst, 0x41uLL, L"[")];
  v10 = RtlIpv6AddressToStringW(Address, v9);
  v11 = v10;
  if ( ScopeId )
    v11 = &v10[swprintf_s(v10, (v16 - (_BYTE *)v10) >> 1, L"%%%u", ScopeId)];
  if ( Port )
    v11 += swprintf_s(v11, (v16 - (_BYTE *)v11) >> 1, L"]:%u", (unsigned __int16)__ROR2__(Port, 8));
  v12 = v11 - Dst + 1;
  v13 = *AddressStringLength < v12;
  *AddressStringLength = v12;
  if ( v13 )
    return -1073741811;
  memmove(AddressString, Dst, 2LL * v12);
  return 0;
}
