/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAGPEAU_GUID@@@ZPEAXPEAGPEAU1@@Shared@DevPlat@@YAJP6AJPEAXPEAGPEAU_GUID@@@Z012@Z @ 0x180003298
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x1800032F0 (-GetGameIdByAUMID@GameConfigStoreClient@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned short *,_GUID *),void *,unsigned short *,_GUID *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 7u, 0LL, a2, a3, a4);
}
