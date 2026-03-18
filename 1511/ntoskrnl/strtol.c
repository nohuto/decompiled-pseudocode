/*
 * XREFs of strtol @ 0x14014640C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14013B8E0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     ?strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z @ 0x1401461D4 (-strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX(&_initiallocalestructinfo, Str, (const char **)EndPtr, Radix, 0, 0);
}
