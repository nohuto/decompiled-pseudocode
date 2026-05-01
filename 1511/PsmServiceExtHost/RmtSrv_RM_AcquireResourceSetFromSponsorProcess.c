/*
 * XREFs of RmtSrv_RM_AcquireResourceSetFromSponsorProcess @ 0x1800382E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 */

__int64 __fastcall RmtSrv_RM_AcquireResourceSetFromSponsorProcess(
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
        unsigned int a11,
        int *a12,
        const unsigned int *a13,
        unsigned int *a14)
{
  return ResourceManagerServerProxy::Handle_RM_AcquireResourceSetFromSponsorProcess(
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
           a13,
           a14);
}
