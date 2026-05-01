/*
 * XREFs of ?RmTestGetResourceSetTypeFromPid@ResourceManagerProxy@@QEAAJKPEAW4RmResourceSetType@@@Z @ 0x18000EEB0
 * Callers:
 *     RmTestGetResourceSetTypeFromPid @ 0x18000F310 (RmTestGetResourceSetTypeFromPid.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetResourceSetTypeFromPid(
        ResourceManagerProxy *this,
        int a2,
        enum RmResourceSetType *a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 0xFu, 0LL, *((_QWORD *)this + 2), a2, a3);
}
