/*
 * XREFs of ?GetGlobalProperty@GameConfigStoreClient@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180006BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXIPEAIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXIPEAIQEAE@Z0W4GlobalProperty_t@ExecutionModel@@1PEAE@Z @ 0x180006B88 (--$RpcCall@P6AJPEAXIPEAIQEAE@ZPEAXW4GlobalProperty_t@ExecutionModel@@PEAIPEAE@Shared@DevPlat@@YA.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::GetGlobalProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  if ( a3 )
    return DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int *,unsigned char * const),void *,enum ExecutionModel::GlobalProperty_t,unsigned int *,unsigned char *>(
             a1,
             *(_QWORD *)(a1 + 8),
             a2,
             a4,
             a3);
  return (CLIENT_CALL_RETURN)DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned int *),void *,enum ExecutionModel::GlobalProperty_t,unsigned int *>(
                               a1,
                               *(_QWORD *)(a1 + 8),
                               a2);
}
