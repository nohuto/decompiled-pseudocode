/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@IIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IIQEAE@Z01W4GameProperty_t@ExecutionModel@@IPEAE@Z @ 0x1800105B4
 * Callers:
 *     ?SetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x180010BC0 (-SetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int,unsigned char * const),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int,unsigned char *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF

  v9 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0xFu, 0LL, a2, &v9, a4, a5, a6);
}
