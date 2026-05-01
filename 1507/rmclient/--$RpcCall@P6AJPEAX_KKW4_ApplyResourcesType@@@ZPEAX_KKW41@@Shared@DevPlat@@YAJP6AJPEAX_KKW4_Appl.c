/*
 * XREFs of ??$RpcCall@P6AJPEAX_KKW4_ApplyResourcesType@@@ZPEAX_KKW41@@Shared@DevPlat@@YAJP6AJPEAX_KKW4_ApplyResourcesType@@@Z01K2@Z @ 0x180004320
 * Callers:
 *     ?Apply@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x180005480 (-Apply@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 *     ?Apply@ResourceSetProxy@ExecutionModel@@UEAAJK@Z @ 0x18000FE80 (-Apply@ResourceSetProxy@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned long,enum _ApplyResourcesType),void *,unsigned __int64,unsigned long,enum _ApplyResourcesType>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 6u, 0LL, a2, a3, a4, a5);
}
