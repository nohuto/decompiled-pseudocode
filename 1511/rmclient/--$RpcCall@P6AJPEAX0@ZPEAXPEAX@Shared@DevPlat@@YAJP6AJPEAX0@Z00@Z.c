/*
 * XREFs of ??$RpcCall@P6AJPEAX0@ZPEAXPEAX@Shared@DevPlat@@YAJP6AJPEAX0@Z00@Z @ 0x1800101A4
 * Callers:
 *     ?ResourcePolicy_RevertProcessAffinityMask@@YAJPEAX@Z @ 0x1800105C0 (-ResourcePolicy_RevertProcessAffinityMask@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,void *),void *,void *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0x11u, 0LL, a2, a3);
}
