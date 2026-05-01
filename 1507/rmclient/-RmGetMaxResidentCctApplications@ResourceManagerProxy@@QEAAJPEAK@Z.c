/*
 * XREFs of ?RmGetMaxResidentCctApplications@ResourceManagerProxy@@QEAAJPEAK@Z @ 0x18000EB7C
 * Callers:
 *     RmGetMaxResidentCctApplications @ 0x18000EFD0 (RmGetMaxResidentCctApplications.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmGetMaxResidentCctApplications(
        ResourceManagerProxy *this,
        unsigned int *a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 0x11u, 0LL, *((_QWORD *)this + 2), a2);
}
