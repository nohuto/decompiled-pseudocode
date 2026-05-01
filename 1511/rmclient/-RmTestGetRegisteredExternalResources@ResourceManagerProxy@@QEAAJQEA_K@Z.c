/*
 * XREFs of ?RmTestGetRegisteredExternalResources@ResourceManagerProxy@@QEAAJQEA_K@Z @ 0x18000F5E0
 * Callers:
 *     RmTestGetRegisteredExternalResources @ 0x18000FB00 (RmTestGetRegisteredExternalResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetRegisteredExternalResources(
        ResourceManagerProxy *this,
        unsigned __int64 *const a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xCu, 0LL, *((_QWORD *)this + 2), a2);
}
