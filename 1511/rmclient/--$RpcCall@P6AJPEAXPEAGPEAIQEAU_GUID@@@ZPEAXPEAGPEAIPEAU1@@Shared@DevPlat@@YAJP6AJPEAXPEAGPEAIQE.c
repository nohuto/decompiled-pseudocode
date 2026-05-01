/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAGPEAIQEAU_GUID@@@ZPEAXPEAGPEAIPEAU1@@Shared@DevPlat@@YAJP6AJPEAXPEAGPEAIQEAU_GUID@@@Z012PEAU2@@Z @ 0x180010F2C
 * Callers:
 *     ?GetGameIdsByExeName@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z @ 0x1800115E0 (-GetGameIdsByExeName@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,unsigned int *,_GUID * const),void *,unsigned short *,unsigned int *,_GUID *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 0xCu, 0LL, a2, a3, a4, a5);
}
