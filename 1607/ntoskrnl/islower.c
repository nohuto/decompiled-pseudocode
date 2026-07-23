/*
 * XREFs of islower @ 0x14014E244
 * Callers:
 *     RtlEthernetStringToAddressA @ 0x1402143D4 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x140214518 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140214780 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140214958 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 2;
}
