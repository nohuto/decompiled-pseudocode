/*
 * XREFs of ??$RpcCall@P6AJPEAX_KK@ZPEAX_KK@Shared@DevPlat@@YAJP6AJPEAX_KK@Z01K@Z @ 0x18001098C
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x180010D40 (-NotifyPendingResourceSetTransition@ResourceSetProxy@ExecutionModel@@UEAAJW4Enum@ResourceSetType.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,unsigned long),void *,unsigned __int64,unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0xBu, 0LL, a2, a3, a4);
}
