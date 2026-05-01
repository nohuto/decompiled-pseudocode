/*
 * XREFs of ?GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z @ 0x18000E9B8
 * Callers:
 *     SHGetResourceManagementValue @ 0x18000F360 (SHGetResourceManagementValue.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::GetResourceManagementValue(
        ResourceManagerProxy *this,
        int a2,
        unsigned __int64 *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 0xBu, 0LL, *((_QWORD *)this + 2), a2, a3);
}
