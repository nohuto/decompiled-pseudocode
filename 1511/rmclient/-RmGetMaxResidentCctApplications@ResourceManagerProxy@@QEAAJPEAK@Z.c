/*
 * XREFs of ?RmGetMaxResidentCctApplications@ResourceManagerProxy@@QEAAJPEAK@Z @ 0x18000F3FC
 * Callers:
 *     RmGetMaxResidentCctApplications @ 0x18000F8B0 (RmGetMaxResidentCctApplications.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmGetMaxResidentCctApplications(
        ResourceManagerProxy *this,
        unsigned int *a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x10u, 0LL, *((_QWORD *)this + 2), a2);
}
