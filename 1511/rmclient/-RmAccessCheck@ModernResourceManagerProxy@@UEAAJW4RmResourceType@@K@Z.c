/*
 * XREFs of ?RmAccessCheck@ModernResourceManagerProxy@@UEAAJW4RmResourceType@@K@Z @ 0x18000FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ModernResourceManagerProxy::RmAccessCheck(__int64 a1, int a2, int a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 4u, 0LL, *(_QWORD *)(a1 + 16), a2, a3);
}
