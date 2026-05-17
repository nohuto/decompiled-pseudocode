/*
 * XREFs of wcstol @ 0x18009B740
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x1800696C0 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     wcstoxlX @ 0x18009B52C (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 0, 0);
}
