/*
 * XREFs of __isascii @ 0x180097050
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007CED0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007CF80 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007EAE0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007EC10 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800EE250 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
