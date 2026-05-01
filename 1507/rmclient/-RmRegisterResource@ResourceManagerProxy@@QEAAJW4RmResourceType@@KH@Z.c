/*
 * XREFs of ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x1800016CC
 * Callers:
 *     RmRegisterResource @ 0x180001720 (RmRegisterResource.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmRegisterResource(__int64 a1, int a2, int a3, int a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 4u, 0LL, *(_QWORD *)(a1 + 16), a2, a3, a4);
}
