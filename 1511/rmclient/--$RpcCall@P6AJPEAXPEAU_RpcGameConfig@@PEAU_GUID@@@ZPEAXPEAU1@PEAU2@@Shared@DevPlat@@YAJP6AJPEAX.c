/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@ZPEAXPEAU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXPEAU_RpcGameConfig@@PEAU_GUID@@@Z012@Z @ 0x180011070
 * Callers:
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180011460 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_RpcGameConfig *,_GUID *),void *,_RpcGameConfig *,_GUID *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 5u, 0LL, a2, a3, a4);
}
