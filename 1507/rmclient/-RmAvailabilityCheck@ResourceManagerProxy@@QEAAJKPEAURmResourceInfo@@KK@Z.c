/*
 * XREFs of ?RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z @ 0x18000EB04
 * Callers:
 *     RmAvailabilityCheck @ 0x18000EF60 (RmAvailabilityCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAvailabilityCheck(
        ResourceManagerProxy *this,
        int a2,
        struct RmResourceInfo *a3,
        int a4,
        unsigned int a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 7u, 0LL, *((_QWORD *)this + 2), a2, a3, a4, a5);
}
