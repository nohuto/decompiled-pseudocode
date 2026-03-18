/*
 * XREFs of __isascii @ 0x140172900
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140168E94 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140249010 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x140249154 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402493BC (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140249594 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
