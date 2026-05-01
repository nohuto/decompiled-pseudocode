/*
 * XREFs of ?RmTestGetResourceSetTypeFromPid@ResourceManagerProxy@@QEAAJKPEAW4RmResourceSetType@@@Z @ 0x18000F794
 * Callers:
 *     RmTestGetResourceSetTypeFromPid @ 0x18000FC40 (RmTestGetResourceSetTypeFromPid.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetResourceSetTypeFromPid(
        ResourceManagerProxy *this,
        int a2,
        enum RmResourceSetType *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xEu, 0LL, *((_QWORD *)this + 2), a2, a3);
}
