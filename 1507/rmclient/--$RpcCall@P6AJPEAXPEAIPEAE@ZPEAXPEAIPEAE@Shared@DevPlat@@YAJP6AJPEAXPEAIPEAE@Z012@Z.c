/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAIPEAE@ZPEAXPEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAE@Z012@Z @ 0x180010470
 * Callers:
 *     ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x1800109B0 (-GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,unsigned char *),void *,unsigned int *,unsigned char *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 3u, 0LL, a2, a3, a4);
}
