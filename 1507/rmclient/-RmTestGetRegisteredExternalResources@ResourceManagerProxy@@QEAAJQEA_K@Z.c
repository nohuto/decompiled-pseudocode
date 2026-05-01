/*
 * XREFs of ?RmTestGetRegisteredExternalResources@ResourceManagerProxy@@QEAAJQEA_K@Z @ 0x18000ECFC
 * Callers:
 *     RmTestGetRegisteredExternalResources @ 0x18000F1D0 (RmTestGetRegisteredExternalResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetRegisteredExternalResources(
        ResourceManagerProxy *this,
        unsigned __int64 *const a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 0xDu, 0LL, *((_QWORD *)this + 2), a2);
}
