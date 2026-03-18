/*
 * XREFs of wcstoul @ 0x14014F48C
 * Callers:
 *     PnpStringToDwordValue @ 0x1401CF58C (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     LocalpConvertStringSidToSid @ 0x1406CB8F8 (LocalpConvertStringSidToSid.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D77C4 (_CmCreateOrdinalInstanceKey.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14014F230 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
