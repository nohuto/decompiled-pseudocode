/*
 * XREFs of __isascii @ 0x1800844A0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x180068400 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800684B0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x180070060 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800700D0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800DF8E0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
