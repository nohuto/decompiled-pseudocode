/*
 * XREFs of ?RmTestGetResourceSetInfos@ResourceManagerProxy@@QEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18000F644
 * Callers:
 *     RmTestGetResourceSetInfos @ 0x18000FB40 (RmTestGetResourceSetInfos.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetResourceSetInfos(
        ResourceManagerProxy *this,
        int a2,
        struct RmResourceSetInfo *a3,
        unsigned int *a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xBu, 0LL, *((_QWORD *)this + 2), a2, a3, a4);
}
