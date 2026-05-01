/*
 * XREFs of ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z @ 0x18000EAA0
 * Callers:
 *     RmAccessCheckOnSelf @ 0x18000EF20 (RmAccessCheckOnSelf.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAccessCheck(__int64 a1, int a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 6u, 0LL, *(_QWORD *)(a1 + 16), a2);
}
