/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@PEAIPEAE@ZPEAXU1@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEAIPEAE@Z0123@Z @ 0x1800107CC
 * Callers:
 *     ?GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x180010910 (-GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int *,unsigned char *),void *,_GUID,unsigned int *,unsigned char *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF

  v6 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 1u, 0LL, a2, &v6, a4, a5);
}
