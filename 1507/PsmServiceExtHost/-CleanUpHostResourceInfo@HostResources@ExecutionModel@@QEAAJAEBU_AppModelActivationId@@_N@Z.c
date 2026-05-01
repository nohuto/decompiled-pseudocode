/*
 * XREFs of ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002900 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 *     ?HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180017620 (-HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180014338 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800184C4 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x1800186AC (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x180018850 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResources::CleanUpHostResourceInfo(
        ExecutionModel::HostResources *this,
        const struct _AppModelActivationId *a2,
        char a3)
{
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  struct ExecutionModel::HostResourceInfo *v7; // r10
  struct ExecutionModel::HostResourceInfo *v9; // [rsp+38h] [rbp+10h] BYREF

  HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(this, *((_QWORD *)a2 + 2));
  v9 = HostResourceInfoForHostId;
  v7 = HostResourceInfoForHostId;
  if ( HostResourceInfoForHostId )
  {
    if ( !a3
      || (ExecutionModel::HostResourceInfo::PurgeResourceSets(HostResourceInfoForHostId),
          v9 = ExecutionModel::HostResources::FindHostResourceInfoForHostId(this, *((_QWORD *)a2 + 2)),
          (v7 = v9) != 0LL) )
    {
      if ( *((struct ExecutionModel::HostResourceInfo **)v7 + 10) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 80)
        && *((struct ExecutionModel::HostResourceInfo **)v7 + 13) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 104)
        && *((struct ExecutionModel::HostResourceInfo **)v7 + 16) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 128) )
      {
        if ( *(_DWORD *)a2 )
          ExecutionModel::HostResources::DecrementPackageHostCount(
            this,
            *((_DWORD *)v7 + 44),
            *((void **)v7 + 23),
            *((const unsigned __int16 **)a2 + 1));
        ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(this, &v9);
      }
    }
  }
  return 0LL;
}
