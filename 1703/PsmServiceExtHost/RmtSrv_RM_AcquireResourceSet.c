/*
 * XREFs of RmtSrv_RM_AcquireResourceSet @ 0x1800299B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180029E08 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 */

int __fastcall RmtSrv_RM_AcquireResourceSet(
        void *a1,
        struct RmResourceSetInfo *a2,
        unsigned __int8 a3,
        const unsigned __int16 *a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        int *a11,
        unsigned __int64 a12,
        unsigned __int64 *a13)
{
  return ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
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
