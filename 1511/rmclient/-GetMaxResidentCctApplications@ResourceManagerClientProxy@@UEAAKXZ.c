/*
 * XREFs of ?GetMaxResidentCctApplications@ResourceManagerClientProxy@@UEAAKXZ @ 0x180013D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceManagerClientProxy::GetMaxResidentCctApplications(ResourceManagerClientProxy *this)
{
  unsigned int v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 0xAu, 0LL, *((_QWORD *)this + 2567), &v2);
  return v2;
}
