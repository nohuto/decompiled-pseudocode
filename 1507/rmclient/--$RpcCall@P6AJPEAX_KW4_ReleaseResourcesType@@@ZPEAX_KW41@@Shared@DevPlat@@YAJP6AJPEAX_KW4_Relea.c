/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004380
 * Callers:
 *     ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004DE0 (-Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x180004F20 (-ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ.c)
 *     ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x1800054B0 (--_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z.c)
 *     ?DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z @ 0x18000B38C (-DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 7u, 0LL, a2, a3, a4);
}
