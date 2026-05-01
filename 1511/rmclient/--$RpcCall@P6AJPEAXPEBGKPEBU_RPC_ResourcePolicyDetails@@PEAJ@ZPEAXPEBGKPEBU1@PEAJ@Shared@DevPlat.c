/*
 * XREFs of ??$RpcCall@P6AJPEAXPEBGKPEBU_RPC_ResourcePolicyDetails@@PEAJ@ZPEAXPEBGKPEBU1@PEAJ@Shared@DevPlat@@YAJP6AJPEAXPEBGKPEBU_RPC_ResourcePolicyDetails@@PEAJ@Z01K23@Z @ 0x18001083C
 * Callers:
 *     ?CreateResourcePolicy@ResourcePolicyStoreProxy@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x1800108C0 (-CreateResourcePolicy@ResourcePolicyStoreProxy@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDeta.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned short const *,unsigned long,_RPC_ResourcePolicyDetails const *,long *),void *,unsigned short const *,unsigned long,_RPC_ResourcePolicyDetails const *,long *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 2u, 0LL, a2, a3, a4, a5, a6);
}
