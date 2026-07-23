/*
 * XREFs of KseRegisterShim @ 0x140570974
 * Callers:
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x1407B3080 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
