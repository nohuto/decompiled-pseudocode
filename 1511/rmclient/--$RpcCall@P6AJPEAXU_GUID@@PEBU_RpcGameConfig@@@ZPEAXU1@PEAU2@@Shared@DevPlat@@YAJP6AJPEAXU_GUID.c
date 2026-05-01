/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@PEBU_RpcGameConfig@@@ZPEAXU1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@PEBU_RpcGameConfig@@@Z01PEAU3@@Z @ 0x1800113E8
 * Callers:
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180011680 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID,_RpcGameConfig const *),void *,_GUID,_RpcGameConfig *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 4u, 0LL, a2, &v5, a4);
}
