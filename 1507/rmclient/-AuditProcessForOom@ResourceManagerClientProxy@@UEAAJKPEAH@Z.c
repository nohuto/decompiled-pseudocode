/*
 * XREFs of ?AuditProcessForOom@ResourceManagerClientProxy@@UEAAJKPEAH@Z @ 0x1800129E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerClientProxy::AuditProcessForOom(
        ResourceManagerClientProxy *this,
        int a2,
        int *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0xCu, 0LL, *((_QWORD *)this + 2510), a2, a3);
}
