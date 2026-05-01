/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@K@Z012K@Z @ 0x180003860
 * Callers:
 *     ?SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z @ 0x1800049B0 (-SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // [rsp+28h] [rbp-30h]

  v6 = 0;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 8u, 0LL, a2, a3, v6, a5);
}
