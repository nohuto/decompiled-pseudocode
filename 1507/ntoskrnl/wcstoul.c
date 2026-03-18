/*
 * XREFs of wcstoul @ 0x1401740E0
 * Callers:
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14058A6E4 (_CmCreateOrdinalInstanceKey.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ?wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z @ 0x140173E84 (-wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX(&_initiallocalestructinfo, Str, (const unsigned __int16 **)EndPtr, Radix, 1, 0);
}
