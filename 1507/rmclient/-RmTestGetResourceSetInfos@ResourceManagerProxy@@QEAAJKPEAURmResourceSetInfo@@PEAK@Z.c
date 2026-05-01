/*
 * XREFs of ?RmTestGetResourceSetInfos@ResourceManagerProxy@@QEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18000ED60
 * Callers:
 *     RmTestGetResourceSetInfos @ 0x18000F210 (RmTestGetResourceSetInfos.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmTestGetResourceSetInfos(
        ResourceManagerProxy *this,
        int a2,
        struct RmResourceSetInfo *a3,
        unsigned int *a4)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0, 0xCu, 0LL, *((_QWORD *)this + 2), a2, a3, a4);
}
