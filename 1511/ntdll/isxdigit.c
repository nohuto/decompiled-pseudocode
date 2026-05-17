/*
 * XREFs of isxdigit @ 0x180095EF0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007A470 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007A530 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007BED0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007C000 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800E5030 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18013F1C0[v1] & 0x80;
}
