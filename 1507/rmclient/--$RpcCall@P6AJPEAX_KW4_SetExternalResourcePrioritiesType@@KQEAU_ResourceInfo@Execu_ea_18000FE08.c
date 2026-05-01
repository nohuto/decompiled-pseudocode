/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@ZPEAX_KW41@H$$T@Shared@DevPlat@@YAJP6AJPEAX_KW4_SetExternalResourcePrioritiesType@@KQEAU_ResourceInfo@ExecutionModel@@@Z012H$$T@Z @ 0x18000FE08
 * Callers:
 *     ?ResetExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x1800102A0 (-ResetExternalResourcePriorities@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,unsigned long,ExecutionModel::_ResourceInfo * const),void *,unsigned __int64,enum _SetExternalResourcePrioritiesType,int,std::nullptr_t>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+30h] [rbp-28h]

  v5 = 0;
  v4 = 1;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xAu, 0LL, a2, a3, v4, v5, 0LL);
}
