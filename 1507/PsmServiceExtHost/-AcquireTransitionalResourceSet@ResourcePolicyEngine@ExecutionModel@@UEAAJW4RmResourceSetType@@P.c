/*
 * XREFs of ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 * Callees:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 *     ?FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z @ 0x180018850 (-FindHostResourceInfoForHostId@HostResources@ExecutionModel@@QEAAPEAVHostResourceInfo@2@_K@Z.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet(
        __int64 a1,
        unsigned int a2,
        ExecutionModel::ResourceSetImpl *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        unsigned int a7,
        struct _AppModelActivationId *a8,
        int *a9,
        struct ExecutionModel::IResourceSet *a10,
        _QWORD *a11)
{
  unsigned __int64 v15; // rdx
  struct ExecutionModel::HostResourceInfo *HostResourceInfoForHostId; // rcx
  int v17; // edi

  *a11 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v15 = *((_QWORD *)a8 + 2);
  if ( v15 == -1LL
    || (HostResourceInfoForHostId = ExecutionModel::HostResources::FindHostResourceInfoForHostId(
                                      *(ExecutionModel::HostResources **)(a1 + 80),
                                      v15)) == 0LL
    && (HostResourceInfoForHostId = ExecutionModel::HostResources::CreateHostResourceInfoForAppId(
                                      *(ExecutionModel::HostResources **)(a1 + 80),
                                      a7,
                                      a6,
                                      a8,
                                      (struct ExecutionModel::ResourcePolicyEngine *)a1)) == 0LL )
  {
    v17 = -2147024882;
    goto LABEL_7;
  }
  v17 = ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
          (__int64)HostResourceInfoForHostId,
          a2,
          a3,
          a4,
          a5,
          0,
          a9,
          a10,
          a11);
  if ( v17 < 0 )
LABEL_7:
    ExecutionModel::HostResources::CleanUpHostResourceInfo(*(ExecutionModel::HostResources **)(a1 + 80), a8, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  return (unsigned int)v17;
}
