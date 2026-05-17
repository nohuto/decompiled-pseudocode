/*
 * XREFs of islower @ 0x180084650
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x180068400 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x180070060 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800700D0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800DF8E0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801401C0[v1] & 2;
}
