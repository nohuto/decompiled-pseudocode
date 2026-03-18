/*
 * XREFs of __isascii @ 0x140144880
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14013B8E0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1401FA27C (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1401FA3C0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1401FA628 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1401FA800 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
