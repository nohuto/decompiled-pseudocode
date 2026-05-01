/*
 * XREFs of ??$RpcCall@P6AJPEAX0PEAI@ZPEAXPEAXPEAI@Shared@DevPlat@@YAJP6AJPEAX0PEAI@Z001@Z @ 0x180010288
 * Callers:
 *     ?ResourcePolicy_GetProcessAffinityMask@@YAJPEAXPEAIPEAGPEA_K@Z @ 0x180010510 (-ResourcePolicy_GetProcessAffinityMask@@YAJPEAXPEAIPEAGPEA_K@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,void *,unsigned int *),void *,void *,unsigned int *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0x12u, 0LL, a2, a3, a4);
}
