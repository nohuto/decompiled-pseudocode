/*
 * XREFs of ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50
 * Callers:
 *     ?RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004BE8 (-RmpActivityHostCheckDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013CDC (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800346C0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800354A8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035710 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004944 (-RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013F00 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementEmptySignalAbort@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032A58 (-RmpEnforcementEmptySignalAbort@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckQueueWork(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 v3; // al
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al

  if ( *((int *)a1 + 5) < 0 )
    return 0LL;
  v2 = *((_BYTE *)a1 + 820);
  v3 = RmpPolicyComputeDesiredState(a1);
  v4 = v3;
  if ( (*((_BYTE *)a1 + 816) & 3) == 0 && v2 != v3 )
    RmpEnforcementArmWorkerForActivityHost(a1);
  v5 = *((_BYTE *)a1 + 821);
  if ( (*((_DWORD *)a1 + 14) != 1 || ((v2 ^ v4) & 0x40) == 0 && (v5 & 0x40) == 0)
    && ((v4 & 8) != 0 || ((v2 | v5) & 8) == 0)
    && ((v4 & 0x10) != 0 || ((v2 | v5) & 0x10) == 0) )
  {
    return 0LL;
  }
  if ( (v5 & 0x27) != 0 )
    RmpEnforcementEmptySignalAbort(a1);
  return 1LL;
}
