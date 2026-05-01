/*
 * XREFs of ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800052E0 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 *     ?HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180019570 (-HostStateNotification@ResourcePolicyEngine@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800197A0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x1800137F0 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x18001A110 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A404 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResources::CleanUpHostResourceInfo(
        ExecutionModel::HostResources *this,
        const struct _AppModelActivationId *a2,
        char a3)
{
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rax
  struct ExecutionModel::HostResourceInfo *v7; // r9
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
      if ( *((struct ExecutionModel::HostResourceInfo **)v7 + 11) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 88)
        && *((struct ExecutionModel::HostResourceInfo **)v7 + 14) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 112)
        && *((struct ExecutionModel::HostResourceInfo **)v7 + 17) == (struct ExecutionModel::HostResourceInfo *)((char *)v7 + 136) )
      {
        if ( *(_DWORD *)a2 )
          ExecutionModel::HostResources::DecrementPackageHostCount(
            this,
            *(_DWORD *)(*((_QWORD *)v7 + 3) + 48LL),
            *(void **)(*((_QWORD *)v7 + 3) + 56LL),
            *((const unsigned __int16 **)a2 + 1));
        ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(this, &v9);
      }
    }
  }
  return 0LL;
}
