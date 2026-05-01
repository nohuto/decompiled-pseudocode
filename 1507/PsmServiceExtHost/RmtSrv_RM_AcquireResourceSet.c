/*
 * XREFs of RmtSrv_RM_AcquireResourceSet @ 0x180031040
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 */

__int64 __fastcall RmtSrv_RM_AcquireResourceSet(
        void *a1,
        struct RmResourceSetInfo *a2,
        unsigned __int8 a3,
        const struct _GUID *a4,
        int *a5,
        const unsigned int *a6,
        unsigned int *a7)
{
  return ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(g_pProxy, a1, a2, a3, a4, a5, a6, a7);
}
