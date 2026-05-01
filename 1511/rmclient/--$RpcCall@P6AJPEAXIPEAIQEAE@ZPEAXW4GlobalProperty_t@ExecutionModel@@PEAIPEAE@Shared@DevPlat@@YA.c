/*
 * XREFs of ??$RpcCall@P6AJPEAXIPEAIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXIPEAIQEAE@Z0W4GlobalProperty_t@ExecutionModel@@1PEAE@Z @ 0x1800074E0
 * Callers:
 *     ?GetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180007440 (-GetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int *,unsigned char * const),void *,enum ExecutionModel::GlobalProperty_t,unsigned int *,unsigned char *>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 0x10u, 0LL, a2, a3, a4, a5);
}
