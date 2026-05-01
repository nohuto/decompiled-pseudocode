/*
 * XREFs of ??$RpcCall@P6AJPEAXIPEAGPEA_K@ZPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAXIPEAGPEA_K@Z0I12@Z @ 0x180010370
 * Callers:
 *     ?ResourcePolicy_SetGlobalProcessAffinityMask@@YAJIPEAGPEA_K@Z @ 0x1800105F0 (-ResourcePolicy_SetGlobalProcessAffinityMask@@YAJIPEAGPEA_K@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned int,unsigned short *,unsigned __int64 *),void *,unsigned int,unsigned short *,unsigned __int64 *>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0x14u, 0LL, a2, a3, a4, a5);
}
