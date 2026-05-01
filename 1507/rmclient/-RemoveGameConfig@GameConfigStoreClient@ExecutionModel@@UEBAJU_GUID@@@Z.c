/*
 * XREFs of ?RemoveGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@@Z @ 0x180010B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXU_GUID@@@ZPEAXU1@@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@@Z01@Z @ 0x180010540 (--$RpcCall@P6AJPEAXU_GUID@@@ZPEAXU1@@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@@Z01@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::RemoveGameConfig(
        ExecutionModel::GameConfigStoreClient *this,
        struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int128)*a2;
  v3 = *((_QWORD *)this + 1);
  v5 = v2;
  return DevPlat::Shared::RpcCall<long (*)(void *,_GUID),void *,_GUID>((__int64)this, v3, &v5);
}
