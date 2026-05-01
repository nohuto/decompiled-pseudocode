/*
 * XREFs of ??$RpcCall@P6AJPEAX_KPEA_K@ZPEAX_KPEA_K@Shared@DevPlat@@YAJP6AJPEAX_KPEA_K@Z012@Z @ 0x180001444
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x1800010F0 (-CreateTerminalResourceSet@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned __int64 *),void *,unsigned __int64,unsigned __int64 *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xCu, 0LL, a2, a3, a4);
}
