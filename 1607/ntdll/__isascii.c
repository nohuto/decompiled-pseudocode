/*
 * XREFs of __isascii @ 0x180097060
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007CEE0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007CF90 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007EAF0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007EC20 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800EE190 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
