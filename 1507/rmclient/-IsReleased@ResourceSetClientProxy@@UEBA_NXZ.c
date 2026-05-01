/*
 * XREFs of ?IsReleased@ResourceSetClientProxy@@UEBA_NXZ @ 0x180013490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ResourceSetClientProxy::IsReleased(ResourceSetClientProxy *this)
{
  int v2; // [rsp+20h] [rbp-28h]
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 1;
  v2 = *((_DWORD *)this + 6);
  NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0x15u, 0LL, *((_QWORD *)this + 2), v2, &v3);
  return v3 != 0;
}
