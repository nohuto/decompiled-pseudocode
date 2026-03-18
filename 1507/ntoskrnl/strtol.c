/*
 * XREFs of strtol @ 0x14017443C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140168E94 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     ?strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z @ 0x140174204 (-strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX(&_initiallocalestructinfo, Str, (const char **)EndPtr, Radix, 0, 0);
}
