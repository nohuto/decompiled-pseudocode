/*
 * XREFs of ?SetAutoRelease@ResourceSetClientProxy@@UEAAX_N@Z @ 0x180014BB0
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
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 0x19u, 0LL, *((_QWORD *)this + 2), v2, v3);
}
