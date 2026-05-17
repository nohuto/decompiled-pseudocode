/*
 * XREFs of isxdigit @ 0x180084740
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x180068400 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1800684B0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x180070060 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800700D0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800DF8E0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801401C0[v1] & 0x80;
}
