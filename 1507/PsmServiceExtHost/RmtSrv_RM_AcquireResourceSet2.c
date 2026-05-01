/*
 * XREFs of RmtSrv_RM_AcquireResourceSet2 @ 0x180031090
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 */

__int64 __fastcall RmtSrv_RM_AcquireResourceSet2(
        void *a1,
        struct RmResourceSetInfo *a2,
        unsigned __int8 a3,
        void *a4,
        const unsigned __int16 *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        int *a11,
        const unsigned int *a12,
        unsigned int *a13)
{
  return ResourceManagerServerProxy::Handle_RM_AcquireResourceSet2(
           g_pProxy,
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13);
}
