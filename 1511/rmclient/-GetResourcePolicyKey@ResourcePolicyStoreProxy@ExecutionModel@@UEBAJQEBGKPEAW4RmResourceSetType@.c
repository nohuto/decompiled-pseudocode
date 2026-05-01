/*
 * XREFs of ?GetResourcePolicyKey@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x1800054C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXPEBGKPEAJ@ZPEAXPEBGKPEAJ@Shared@DevPlat@@YAJP6AJPEAXPEBGKPEAJ@Z01K2@Z @ 0x180003940 (--$RpcCall@P6AJPEAXPEBGKPEAJ@ZPEAXPEBGKPEAJ@Shared@DevPlat@@YAJP6AJPEAXPEBGKPEAJ@Z01K2@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourcePolicyStoreProxy::GetResourcePolicyKey(
        ExecutionModel::ResourcePolicyStoreProxy *this,
        const unsigned __int16 *const a2,
        int a3,
        enum RmResourceSetType *a4)
{
  if ( a4 )
  {
    *(_DWORD *)a4 = 57;
    if ( a2 )
      return DevPlat::Shared::RpcCall<long (*)(void *,unsigned short const *,unsigned long,long *),void *,unsigned short const *,unsigned long,long *>(
               (__int64)this,
               *((_QWORD *)this + 2),
               (__int64)a2,
               a3,
               (__int64)a4);
  }
  return (CLIENT_CALL_RETURN)2147942487LL;
}
