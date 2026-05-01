/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@IPEAI@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAI@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IPEAI@Z01W4GameProperty_t@ExecutionModel@@2@Z @ 0x1800111DC
 * Callers:
 *     ?GetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180011620 (-GetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int *),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        __int64 a5)
{
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF

  v7 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 0xEu, 0LL, a2, &v7, a4, a5);
}
