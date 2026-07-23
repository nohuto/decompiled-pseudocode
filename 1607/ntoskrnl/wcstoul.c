/*
 * XREFs of wcstoul @ 0x14014FA4C
 * Callers:
 *     PnpStringToDwordValue @ 0x1401CF320 (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D78FC (_CmCreateOrdinalInstanceKey.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14014F7F0 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
