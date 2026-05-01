/*
 * XREFs of ??$RpcCall@P6AJPEAXKPEAU_GUID@@@ZPEAXKPEAU1@@Shared@DevPlat@@YAJP6AJPEAXKPEAU_GUID@@@Z0K1@Z @ 0x180003340
 * Callers:
 *     ?GetGameIdByPID@GameConfigStoreClient@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180003320 (-GetGameIdByPID@GameConfigStoreClient@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned long,_GUID *),void *,unsigned long,_GUID *>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 8u, 0LL, a2, a3, a4);
}
