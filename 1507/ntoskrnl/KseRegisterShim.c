/*
 * XREFs of KseRegisterShim @ 0x1405B5384
 * Callers:
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407DC850 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407DC8BC (KseVersionLieInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407FB2C0 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
