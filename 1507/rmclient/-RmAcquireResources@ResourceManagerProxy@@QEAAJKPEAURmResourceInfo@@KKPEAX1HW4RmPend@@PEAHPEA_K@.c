/*
 * XREFs of ?RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KKPEAX1HW4RmPend@@PEAHPEA_K@Z @ 0x180001624
 * Callers:
 *     RmAcquireResources @ 0x180001490 (RmAcquireResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAcquireResources(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&stru_1800163E0,
           8u,
           0LL,
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
