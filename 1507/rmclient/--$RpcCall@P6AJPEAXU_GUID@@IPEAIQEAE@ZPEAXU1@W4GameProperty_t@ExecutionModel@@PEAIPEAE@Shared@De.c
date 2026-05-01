/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@IPEAIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IPEAIQEAE@Z01W4GameProperty_t@ExecutionModel@@2PEAE@Z @ 0x1800106C8
 * Callers:
 *     ?GetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180010A80 (-GetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int *,unsigned char * const),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int *,unsigned char *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v8; // [rsp+50h] [rbp-18h] BYREF

  v8 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0xDu, 0LL, a2, &v8, a4, a5, a6);
}
