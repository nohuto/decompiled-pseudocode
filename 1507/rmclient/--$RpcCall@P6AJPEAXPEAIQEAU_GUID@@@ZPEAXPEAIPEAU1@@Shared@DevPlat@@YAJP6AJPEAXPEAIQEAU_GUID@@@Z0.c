/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAIQEAU_GUID@@@ZPEAXPEAIPEAU1@@Shared@DevPlat@@YAJP6AJPEAXPEAIQEAU_GUID@@@Z01PEAU2@@Z @ 0x1800104D8
 * Callers:
 *     ?GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x1800108D0 (-GetAllGameIds@GameConfigStoreClient@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,_GUID * const),void *,unsigned int *,_GUID *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016A88, 0xAu, 0LL, a2, a3, a4);
}
