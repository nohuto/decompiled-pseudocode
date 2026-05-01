/*
 * XREFs of ??$RpcCall@P6AJPEAXIIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@@YAJP6AJPEAXIIQEAE@Z0W4GlobalProperty_t@ExecutionModel@@IPEAE@Z @ 0x180007E2C
 * Callers:
 *     ?SetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x180007E90 (-SetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int,unsigned char * const),void *,enum ExecutionModel::GlobalProperty_t,unsigned int,unsigned char *>(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0x12u, 0LL, a2, a3, a4, a5);
}
