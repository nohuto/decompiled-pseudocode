/*
 * XREFs of ?GetPid@ResourceSetClientProxy@@UEBAKXZ @ 0x180013060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetClientProxy::GetPid(ResourceSetClientProxy *this)
{
  int v2; // [rsp+20h] [rbp-28h]
  unsigned int v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v2 = *((_DWORD *)this + 6);
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0x14u, 0LL, *((_QWORD *)this + 2), v2, &v3);
  return v3;
}
