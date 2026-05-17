/*
 * XREFs of islower @ 0x180097210
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007CEE0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007EAF0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007EC20 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800EE190 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18014C150[v1] & 2;
}
