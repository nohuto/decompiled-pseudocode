/*
 * XREFs of ?GetMaxResidentCctApplications@ResourceManagerClientProxy@@UEAAKXZ @ 0x180012FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::GetMaxResidentCctApplications(ResourceManagerClientProxy *this)
{
  unsigned int v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0xAu, 0LL, *((_QWORD *)this + 2510), &v2);
  return v2;
}
