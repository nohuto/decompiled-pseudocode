/*
 * XREFs of Srv_AcquireResources @ 0x180017190
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 */

__int64 __fastcall Srv_AcquireResources(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        unsigned int a8,
        int a9,
        int a10,
        int *a11,
        __int64 a12,
        ExecutionModel::ResourceSetServerProxy **a13)
{
  if ( g_pResourcePolicyEngineServerProxy )
    return ExecutionModel::ResourcePolicyEngineServerProxy::Handle_AcquireResources(
             a1,
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
  else
    return 2147549183LL;
}
