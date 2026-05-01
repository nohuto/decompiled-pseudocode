/*
 * XREFs of ??$RpcCall@P6AJPEAXIPEAI@ZPEAXW4GlobalProperty_t@ExecutionModel@@PEAI@Shared@DevPlat@@YAJP6AJPEAXIPEAI@Z0W4GlobalProperty_t@ExecutionModel@@1@Z @ 0x180010E5C
 * Callers:
 *     ?GetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180007440 (-GetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int *),void *,enum ExecutionModel::GlobalProperty_t,unsigned int *>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 0x11u, 0LL, a2, a3, a4);
}
