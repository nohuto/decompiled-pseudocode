/*
 * XREFs of ?GetMemoryUsageLimit@ModernResourceManagerProxy@@UEAAJPEA_K@Z @ 0x18000F590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ModernResourceManagerProxy::GetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        unsigned __int64 *a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 1u, 0LL, *((_QWORD *)this + 2), a2);
}
