/*
 * XREFs of ?CreateResourcePolicy@ResourcePolicyStoreProxy@ExecutionModel@@UEAAJQEBGKPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x1800108C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEBGKPEBU_RPC_ResourcePolicyDetails@@PEAJ@ZPEAXPEBGKPEBU1@PEAJ@Shared@DevPlat@@YAJP6AJPEAXPEBGKPEBU_RPC_ResourcePolicyDetails@@PEAJ@Z01K23@Z @ 0x18001083C (--$RpcCall@P6AJPEAXPEBGKPEBU_RPC_ResourcePolicyDetails@@PEAJ@ZPEAXPEBGKPEBU1@PEAJ@Shared@DevPlat.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourcePolicyStoreProxy::CreateResourcePolicy(
        ExecutionModel::ResourcePolicyStoreProxy *this,
        const unsigned __int16 *const a2,
        int a3,
        const struct _ResourcePolicyDetails *a4,
        enum RmResourceSetType *a5)
{
  if ( a5 )
  {
    *(_DWORD *)a5 = 57;
    if ( a2 )
    {
      if ( a4 )
        return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short const *,unsigned long,_RPC_ResourcePolicyDetails const *,long *),void *,unsigned short const *,unsigned long,_RPC_ResourcePolicyDetails const *,long *>(
                 (__int64)this,
                 *((_QWORD *)this + 2),
                 (__int64)a2,
                 a3,
                 (__int64)a4,
                 (__int64)a5);
    }
  }
  return (CLIENT_CALL_RETURN)2147942487LL;
}
