/*
 * XREFs of ??$RpcCall@P6AJPEAXPEBGKPEAJ@ZPEAXPEBGKPEAJ@Shared@DevPlat@@YAJP6AJPEAXPEBGKPEAJ@Z01K2@Z @ 0x180003940
 * Callers:
 *     ?GetResourcePolicyKey@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@@@Z @ 0x1800054C0 (-GetResourcePolicyKey@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJQEBGKPEAW4RmResourceSetType@.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned short const *,unsigned long,long *),void *,unsigned short const *,unsigned long,long *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0, 0LL, a2, a3, a4, a5);
}
