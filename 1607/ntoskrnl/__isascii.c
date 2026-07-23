/*
 * XREFs of __isascii @ 0x14014E218
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140145014 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402143D4 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x140214518 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140214780 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140214958 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
