/*
 * XREFs of RmtSrv_RM_OnApplicationTerminated @ 0x1800313C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmtSrv_RM_OnApplicationTerminated(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  return ResourceManagerServerProxy::Handle_RM_OnApplicationTerminated(g_pProxy, a2, a3, a4, a5, a6, a7);
}
