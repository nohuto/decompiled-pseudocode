/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@ZPEAX_KW41@KQEAU23@@Shared@DevPlat@@YAJP6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@Z012KPEAU34@@Z @ 0x180004250
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180005010 (-ReduceExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const),void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // [rsp+28h] [rbp-30h]

  v7 = 0;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xAu, 0LL, a2, a3, v7, a5, a6);
}
