/*
 * XREFs of RtlIpv4AddressToStringW @ 0x1800818F0
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x180081820 (RtlIpv4AddressToStringExW.c)
 * Callees:
 *     swprintf_s @ 0x1800A2340 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  int s_b2; // [rsp+20h] [rbp-28h]
  int s_b3; // [rsp+28h] [rbp-20h]
  int s_b4; // [rsp+30h] [rbp-18h]

  s_b4 = Addr->S_un.S_un_b.s_b4;
  s_b3 = Addr->S_un.S_un_b.s_b3;
  s_b2 = Addr->S_un.S_un_b.s_b2;
  return &S[swprintf_s(S, 0x10uLL, L"%u.%u.%u.%u", Addr->S_un.S_un_b.s_b1, s_b2, s_b3, s_b4)];
}
