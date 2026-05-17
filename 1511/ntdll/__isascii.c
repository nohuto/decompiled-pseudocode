/*
 * XREFs of __isascii @ 0x180095C50
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007A470 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007A530 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007BED0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007C000 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800E5030 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
