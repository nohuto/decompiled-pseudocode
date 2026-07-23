/*
 * XREFs of strtol @ 0x18009BE30
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007CF80 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x18009BBF0 (strtoxlX.c)
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
