/*
 * XREFs of wcstol @ 0x140146060
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x1400E8864 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405112BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     ?wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z @ 0x140145E54 (-wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX(&_initiallocalestructinfo, Str, (const unsigned __int16 **)EndPtr, Radix, 0, 0);
}
