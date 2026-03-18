/*
 * XREFs of wcstoul @ 0x1401460B0
 * Callers:
 *     PnpStringToDwordValue @ 0x14012CABC (PnpStringToDwordValue.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405177F8 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x140686C0C (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x14076CB4C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ?wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z @ 0x140145E54 (-wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX(&_initiallocalestructinfo, Str, (const unsigned __int16 **)EndPtr, Radix, 1, 0);
}
