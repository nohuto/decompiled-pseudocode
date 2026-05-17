/*
 * XREFs of strtol @ 0x18009AAA0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007A530 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x18009A860 (strtoxlX.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX(
           (__int64)&_initiallocalestructinfo,
           (unsigned __int8 *)String,
           (unsigned __int8 **)EndPtr,
           Radix,
           0,
           0);
}
