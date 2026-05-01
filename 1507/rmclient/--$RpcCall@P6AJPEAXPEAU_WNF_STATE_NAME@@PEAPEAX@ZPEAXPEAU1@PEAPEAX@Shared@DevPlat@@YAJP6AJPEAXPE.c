/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@ZPEAXPEAU1@PEAPEAX@Shared@DevPlat@@YAJP6AJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z012@Z @ 0x180006C88
 * Callers:
 *     ?InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x180006E38 (-InitialzeClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_WNF_STATE_NAME *,void * *),void *,_WNF_STATE_NAME *,void * *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 3u, 0LL, a2, a3, a4);
}
