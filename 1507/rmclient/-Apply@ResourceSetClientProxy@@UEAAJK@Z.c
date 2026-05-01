/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x180012890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this, int a2)
{
  int v3; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 6);
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0x11u, 0LL, *((_QWORD *)this + 2), v3, a2);
}
