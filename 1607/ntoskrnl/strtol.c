/*
 * XREFs of strtol @ 0x14014F7E8
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140144AA4 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x14014F5B0 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
