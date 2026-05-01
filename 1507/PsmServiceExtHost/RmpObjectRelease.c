/*
 * XREFs of RmpObjectRelease @ 0x180009F0C
 * Callers:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010690 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800115F0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0 (-ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@.c)
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180023C90 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x180034A30 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x180036E40 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x180037090 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180038280 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180039B00 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039DE0 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpEnforcementInfoInitializeProcess @ 0x18003AF94 (RmpEnforcementInfoInitializeProcess.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18003BE70 (RmpActivityHostRemoveFromRemediationGroup.c)
 *     ?GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z @ 0x18003E640 (-GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z.c)
 *     ??1ExternalResourceSet@ExecutionModel@@EEAA@XZ @ 0x18003F11C (--1ExternalResourceSet@ExecutionModel@@EEAA@XZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     RmpObjectTableDestroy @ 0x180041200 (RmpObjectTableDestroy.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180041960 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     RmpCoreApiRegisterActivityHostByJobHandle @ 0x180041E08 (RmpCoreApiRegisterActivityHostByJobHandle.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x180041F48 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 *     RmpCoreApiSetHostLimits @ 0x180042040 (RmpCoreApiSetHostLimits.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x1800421D4 (RmpCoreApiUnregisterActivityHost.c)
 * Callees:
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 */

__int64 __fastcall RmpObjectRelease(volatile signed __int32 *P)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(P + 4, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( *((_DWORD *)P + 8) == 1 )
      RmpActivityHostFinalCleanup((__int64)P);
    return RmpFreeHeap((PVOID)P);
  }
  return result;
}
