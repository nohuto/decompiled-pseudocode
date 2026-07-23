/*
 * XREFs of wcstol @ 0x18009CAD0
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x180055A10 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     wcstoxlX @ 0x18009C8BC (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 0, 0);
}
