/*
 * XREFs of ??$RpcCall@P6AJPEAXU_GUID@@@ZPEAXU1@@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@@Z01@Z @ 0x1800110D8
 * Callers:
 *     ?RemoveGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@@Z @ 0x180011730 (-RemoveGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,_GUID),void *,_GUID>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  v4 = *a3;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017BF8, 6u, 0LL, a2, &v4);
}
