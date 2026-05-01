/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAGPEAI@ZPEAXPEAGPEAI@Shared@DevPlat@@YAJP6AJPEAXPEAGPEAI@Z012@Z @ 0x180010324
 * Callers:
 *     ?GetGameIdsByExeName@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x180010A40 (-GetGameIdsByExeName@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,unsigned int *),void *,unsigned short *,unsigned int *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0xBu, 0LL, a2, a3, a4);
}
