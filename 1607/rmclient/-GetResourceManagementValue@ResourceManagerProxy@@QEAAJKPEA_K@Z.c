/*
 * XREFs of ?GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z @ 0x18000A680
 * Callers:
 *     SHGetResourceManagementValue @ 0x18000AA90 (SHGetResourceManagementValue.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::GetResourceManagementValue(
        ResourceManagerProxy *this,
        int a2,
        unsigned __int64 *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 9u, 0LL, *((_QWORD *)this + 2), a2, a3);
}
