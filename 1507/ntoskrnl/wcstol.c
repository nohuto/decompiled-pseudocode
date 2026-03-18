/*
 * XREFs of wcstol @ 0x140174090
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x14012398C (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405894BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     ?wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z @ 0x140173E84 (-wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX(&_initiallocalestructinfo, Str, (const unsigned __int16 **)EndPtr, Radix, 0, 0);
}
