/*
 * XREFs of ?SetAutoRelease@ResourceSetClientProxy@@UEAAX_N@Z @ 0x180013E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ResourceSetClientProxy::SetAutoRelease(ResourceSetClientProxy *this, unsigned __int8 a2)
{
  int v2; // [rsp+20h] [rbp-28h]
  int v3; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v2 = *((_DWORD *)this + 6);
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0x19u, 0LL, *((_QWORD *)this + 2), v2, v3);
}
