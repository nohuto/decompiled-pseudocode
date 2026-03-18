/*
 * XREFs of __isascii @ 0x14014DCA8
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140144AA4 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402145A8 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1402146EC (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140214954 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140214B2C (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
