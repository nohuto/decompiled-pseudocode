/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@PEAI@ZPEAXU1@PEAI@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAI@Z012@Z @ 0x180010758
 * Callers:
 *     ?GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x180010910 (-GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int *),void *,_GUID,unsigned int *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0, 0LL, a2, &v5, a4);
}
