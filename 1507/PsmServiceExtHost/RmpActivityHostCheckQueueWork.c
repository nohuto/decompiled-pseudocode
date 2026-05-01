/*
 * XREFs of RmpActivityHostCheckQueueWork @ 0x18003B7DC
 * Callers:
 *     RmpEnforcementWorkerSynchronize @ 0x180005104 (RmpEnforcementWorkerSynchronize.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180041504 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpGpuMonitorDisableForHost @ 0x180041B94 (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800050C8 (RmpEnforcementArmWorkerForActivityHost.c)
 *     RmpPolicyComputeDesiredState @ 0x18000D390 (RmpPolicyComputeDesiredState.c)
 *     RmpEnforcementEmptySignalAbort @ 0x18003AEFC (RmpEnforcementEmptySignalAbort.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // al
  unsigned int v4; // esi
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al

  if ( *(int *)(a1 + 20) < 0 )
    return 0;
  v2 = *(_BYTE *)(a1 + 772);
  v3 = RmpPolicyComputeDesiredState(a1);
  v4 = 1;
  v5 = v3;
  if ( (*(_BYTE *)(a1 + 768) & 1) == 0 && v2 != v3 )
    RmpEnforcementArmWorkerForActivityHost(a1);
  if ( (v6 = *(_BYTE *)(a1 + 773), *(_DWORD *)(a1 + 40) == 1) && (((v2 ^ v5) & 0x40) != 0 || (v6 & 0x40) != 0)
    || (v5 & 8) == 0 && ((v2 | v6) & 8) != 0
    || (v5 & 0x10) == 0 && ((v2 | v6) & 0x10) != 0 )
  {
    if ( (v6 & 0x27) != 0 )
      RmpEnforcementEmptySignalAbort(a1);
  }
  else
  {
    return 0;
  }
  return v4;
}
