/*
 * XREFs of isdigit @ 0x1800971A0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007CED0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007CF80 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007EAE0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007EC10 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800EE250 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18014C150[v1] & 4;
}
