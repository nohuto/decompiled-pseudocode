/*
 * XREFs of islower @ 0x1401448AC
 * Callers:
 *     RtlEthernetStringToAddressA @ 0x1401FA27C (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x1401FA3C0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1401FA628 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1401FA800 (RtlIpv6StringToAddressExA.c)
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
