/*
 * XREFs of RtlIpv4AddressToStringA @ 0x180082F40
 * Callers:
 *     RtlIpv4AddressToStringExA @ 0x1800E4DD0 (RtlIpv4AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x1800A0A00 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10uLL,
              "%u.%u.%u.%u",
              Addr->S_un.S_un_b.s_b1,
              Addr->S_un.S_un_b.s_b2,
              Addr->S_un.S_un_b.s_b3,
              Addr->S_un.S_un_b.s_b4)];
}
