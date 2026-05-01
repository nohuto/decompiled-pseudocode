/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800052E0
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 * Callees:
 *     ?FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800053C8 (-FindOrCreateHostResourceInfoForAppId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@K.c)
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::AcquireResourceSetFromSponsorProcess(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        unsigned int a7,
        struct _AppModelActivationId *a8,
        int a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForAppId; // rcx
  int v17; // edi

  *a12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  HostResourceInfoForAppId = ExecutionModel::HostResources::FindOrCreateHostResourceInfoForAppId(
                               *(ExecutionModel::HostResources **)(a1 + 80),
                               a7,
                               a6,
                               a8,
                               (struct ExecutionModel::ResourcePolicyEngine *)a1);
  if ( !HostResourceInfoForAppId )
  {
    v17 = -2147024882;
    goto LABEL_5;
  }
  v17 = ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
          HostResourceInfoForAppId,
          a2,
          a3,
          a4,
          a5,
          a9,
          a10,
          a11,
          a12);
  if ( v17 < 0 )
LABEL_5:
    ExecutionModel::HostResources::CleanUpHostResourceInfo(*(ExecutionModel::HostResources **)(a1 + 80), a8, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  return (unsigned int)v17;
}
