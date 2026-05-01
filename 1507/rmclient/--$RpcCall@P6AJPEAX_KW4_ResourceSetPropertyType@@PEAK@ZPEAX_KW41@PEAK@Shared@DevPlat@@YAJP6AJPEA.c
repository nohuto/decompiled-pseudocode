/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@PEAK@ZPEAX_KW41@PEAK@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@PEAK@Z0123@Z @ 0x18000FD94
 * Callers:
 *     ?GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z @ 0x1800100A8 (-GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long *),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 9u, 0LL, a2, a3, a4, a5);
}
