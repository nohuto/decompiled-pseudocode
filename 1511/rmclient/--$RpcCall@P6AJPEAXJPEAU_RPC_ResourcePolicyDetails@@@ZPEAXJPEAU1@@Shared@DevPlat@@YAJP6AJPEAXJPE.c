/*
 * XREFs of ??$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@Z0J1@Z @ 0x180005500
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x180005460 (-GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,long,_RPC_ResourcePolicyDetails *),void *,long,_RPC_ResourcePolicyDetails *>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 1u, 0LL, a2, a3, a4);
}
