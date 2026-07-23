/*
 * XREFs of RtlIpv4AddressToStringA @ 0x14012BD84
 * Callers:
 *     RtlIpv4AddressToStringExA @ 0x1401F9BD0 (RtlIpv4AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x14014975C (sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10uLL,
              "%u.%u.%u.%u",
              (unsigned __int8)*(_DWORD *)Addr,
              *((unsigned __int8 *)Addr + 1),
              *((unsigned __int8 *)Addr + 2),
              *((unsigned __int8 *)Addr + 3))];
}
