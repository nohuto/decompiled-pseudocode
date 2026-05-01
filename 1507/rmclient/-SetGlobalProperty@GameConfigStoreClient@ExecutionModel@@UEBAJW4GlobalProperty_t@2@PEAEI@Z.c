/*
 * XREFs of ?SetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x180007E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXIIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@@YAJP6AJPEAXIIQEAE@Z0W4GlobalProperty_t@ExecutionModel@@IPEAE@Z @ 0x180007E2C (--$RpcCall@P6AJPEAXIIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@@YAJP6AJP.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::SetGlobalProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4)
{
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int,unsigned char * const),void *,enum ExecutionModel::GlobalProperty_t,unsigned int,unsigned char *>(
           a1,
           *(_QWORD *)(a1 + 8),
           a2,
           a4,
           a3);
}
