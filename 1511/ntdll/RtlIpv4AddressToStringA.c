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
              *(unsigned __int8 *)Addr,
              *((unsigned __int8 *)Addr + 1),
              *((unsigned __int8 *)Addr + 2),
              *((unsigned __int8 *)Addr + 3))];
}
