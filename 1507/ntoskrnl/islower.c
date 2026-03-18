/*
 * XREFs of islower @ 0x14017292C
 * Callers:
 *     RtlEthernetStringToAddressA @ 0x140249010 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x140249154 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402493BC (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140249594 (RtlIpv6StringToAddressExA.c)
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
