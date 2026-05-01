/*
 * XREFs of ??$RpcCall@P6AJPEAX0IPEAGPEA_K@ZPEAXPEAXIPEAGPEA_K@Shared@DevPlat@@YAJP6AJPEAX0IPEAGPEA_K@Z00I12@Z @ 0x180010208
 * Callers:
 *     ?ResourcePolicy_SetProcessAffinityMask@@YAJPEAXIPEAGPEA_K@Z @ 0x180010660 (-ResourcePolicy_SetProcessAffinityMask@@YAJPEAXIPEAGPEA_K@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,void *,unsigned int,unsigned short *,unsigned __int64 *),void *,void *,unsigned int,unsigned short *,unsigned __int64 *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0x10u, 0LL, a2, a3, a4, a5, a6);
}
