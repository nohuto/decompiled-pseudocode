/*
 * XREFs of ?GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x180005460
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@Z0J1@Z @ 0x180005500 (--$RpcCall@P6AJPEAXJPEAU_RPC_ResourcePolicyDetails@@@ZPEAXJPEAU1@@Shared@DevPlat@@YAJP6AJPEAXJPE.c)
 *     memset_0 @ 0x1800095EC (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::GetResourcePolicyInformation(
        __int64 a1,
        unsigned int a2,
        void *a3)
{
  __int64 v6; // rcx

  if ( !a3 )
    return 2147942487LL;
  memset_0(a3, 0, 0x70uLL);
  return DevPlat::Shared::RpcCall<long (*)(void *,long,_RPC_ResourcePolicyDetails *),void *,long,_RPC_ResourcePolicyDetails *>(
           v6,
           *(_QWORD *)(a1 + 16),
           a2,
           a3);
}
