/*
 * XREFs of ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800053C8
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800052E0 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 * Callees:
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 */

struct ExecutionModel::HostResourceInfo *__fastcall ExecutionModel::HostResources::FindOrCreateHostResourceInfoForAppId(
        ExecutionModel::HostResources *this,
        unsigned int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct ExecutionModel::ResourcePolicyEngine *a5)
{
  unsigned __int64 v7; // rdx
  struct ExecutionModel::HostResourceInfo *result; // rax

  v7 = *((_QWORD *)a4 + 2);
  if ( v7 == -1LL )
    return 0LL;
  result = ExecutionModel::HostResources::FindHostResourceInfoForHostId(this, v7);
  if ( !result )
    return ExecutionModel::HostResources::CreateHostResourceInfoForAppId(this, a2, a3, a4, a5);
  return result;
}
