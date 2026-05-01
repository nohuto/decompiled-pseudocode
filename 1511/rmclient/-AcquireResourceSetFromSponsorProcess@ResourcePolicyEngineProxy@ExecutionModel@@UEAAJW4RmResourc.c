/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngineProxy@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002610
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002450 (-AcquireResourceSetHelper@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PE.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::AcquireResourceSetFromSponsorProcess(
        void **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        void *a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        struct ExecutionModel::ResourceSetProxy **a12)
{
  return ExecutionModel::ResourcePolicyEngineProxy::AcquireResourceSetHelper(
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
           a12);
}
