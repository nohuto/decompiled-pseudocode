/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UEAAJXZ @ 0x180012900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this)
{
  int v2; // [rsp+20h] [rbp-28h]

  v2 = *((_DWORD *)this + 6);
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0x12u, 0LL, *((_QWORD *)this + 2), v2);
}
