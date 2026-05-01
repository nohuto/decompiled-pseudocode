/*
 * XREFs of ?SetGameProperty@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x180011760
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXU_GUID@@IIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IIQEAE@Z01W4GameProperty_t@ExecutionModel@@IPEAE@Z @ 0x18001114C (--$RpcCall@P6AJPEAXU_GUID@@IIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@IPEAE@Shared@DevPlat@.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::SetGameProperty(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        int a5)
{
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 8);
  v8 = v5;
  return DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int,unsigned char * const),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int,unsigned char *>(
           a1,
           v6,
           &v8,
           a3,
           a5,
           a4);
}
