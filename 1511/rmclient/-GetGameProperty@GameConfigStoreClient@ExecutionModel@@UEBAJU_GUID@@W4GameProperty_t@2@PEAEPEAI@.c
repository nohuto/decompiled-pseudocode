/*
 * XREFs of ?GetGameProperty@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180011620
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAXU_GUID@@IPEAI@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAI@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IPEAI@Z01W4GameProperty_t@ExecutionModel@@2@Z @ 0x1800111DC (--$RpcCall@P6AJPEAXU_GUID@@IPEAI@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAI@Shared@DevPlat@@Y.c)
 *     ??$RpcCall@P6AJPEAXU_GUID@@IPEAIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAIPEAE@Shared@DevPlat@@YAJP6AJPEAXU_GUID@@IPEAIQEAE@Z01W4GameProperty_t@ExecutionModel@@2PEAE@Z @ 0x180011260 (--$RpcCall@P6AJPEAXU_GUID@@IPEAIQEAE@ZPEAXU1@W4GameProperty_t@ExecutionModel@@PEAIPEAE@Shared@De.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::GameConfigStoreClient::GetGameProperty(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 8);
  v8 = v5;
  if ( a4 )
    return DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int *,unsigned char * const),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int *,unsigned char *>(
             a1,
             v6,
             &v8,
             a3,
             a5,
             a4);
  else
    return DevPlat::Shared::RpcCall<long (*)(void *,_GUID,unsigned int,unsigned int *),void *,_GUID,enum ExecutionModel::GameProperty_t,unsigned int *>(
             a1,
             v6,
             &v8,
             a3,
             a5);
}
