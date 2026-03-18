/*
 * XREFs of KseRegisterShim @ 0x140524BA8
 * Callers:
 *     KseDriverScopeInitialize @ 0x1407560AC (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140756118 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140784B48 (KseClearPCIDBitsInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
