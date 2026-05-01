/*
 * XREFs of ??$RpcCall@P6AJPEAXPEAIPEAGPEA_K@ZPEAXPEAIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEAIPEAGPEA_K@Z0123@Z @ 0x1800103E4
 * Callers:
 *     ?ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z @ 0x180010460 (-ResourcePolicy_GetGlobalProcessAffinityMask@@YAJPEAIPEAGPEA_K@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int *,unsigned short *,unsigned __int64 *),void *,unsigned int *,unsigned short *,unsigned __int64 *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0x16u, 0LL, a2, a3, a4, a5);
}
