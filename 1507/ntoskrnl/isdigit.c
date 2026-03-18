/*
 * XREFs of isdigit @ 0x14017290C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140168E94 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140249010 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x140249154 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402493BC (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140249594 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 4;
}
