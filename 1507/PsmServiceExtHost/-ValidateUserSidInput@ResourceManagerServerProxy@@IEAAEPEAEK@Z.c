/*
 * XREFs of ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x180033510
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_OnApplicationTerminated@ResourceManagerServerProxy@@QEAAJPEBGPEAEKKK_K@Z @ 0x180032718 (-Handle_RM_OnApplicationTerminated@ResourceManagerServerProxy@@QEAAJPEBGPEAEKKK_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ResourceManagerServerProxy::ValidateUserSidInput(
        ResourceManagerServerProxy *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  return a3 >= 0xC && a3 == RtlLengthSid(a2) && RtlValidSid(a2);
}
