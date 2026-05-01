/*
 * XREFs of _TlgWrite @ 0x18001CC7C
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180001170 (RmgrSrv_RmAcquireResources.c)
 *     RmgrSrv_RmReleaseResources @ 0x180001420 (RmgrSrv_RmReleaseResources.c)
 *     RmgrSrv_RmRegisterResource @ 0x180001550 (RmgrSrv_RmRegisterResource.c)
 *     RmgrSrv_RmAccessCheck @ 0x1800016B0 (RmgrSrv_RmAccessCheck.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z @ 0x180001AE0 (-RmReleaseResources@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180001C30 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x1800023F0 (-RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z.c)
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180003D00 (-LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ.c)
 *     ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180003E1C (-LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x180004838 (-RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z.c)
 *     ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180004B5C (-RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     RmpActivityHostApplyExecutionSpeed @ 0x180004E7C (RmpActivityHostApplyExecutionSpeed.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180005A94 (RmpActivityHostQueryCommitDebt.c)
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B08 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpActivityHostQueryProcessListForMetrics @ 0x180006880 (RmpActivityHostQueryProcessListForMetrics.c)
 *     RmpEnforcementWorkCallback @ 0x180008C50 (RmpEnforcementWorkCallback.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000D87C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180017520 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     RmpEnforcementUpdateSwapState @ 0x18001CB14 (RmpEnforcementUpdateSwapState.c)
 *     RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x18001D1AC (RmpActivityHostAggregateMemUtilMetricsByProcess.c)
 *     RmgrSrv_RegisterWithServer @ 0x18001D460 (RmgrSrv_RegisterWithServer.c)
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x18001F030 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x18001F2F8 (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18001F410 (-RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x180021AD8 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x18002A8A0 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180037070 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     RmgrSrv_RmAvailabilityCheck @ 0x1800371D0 (RmgrSrv_RmAvailabilityCheck.c)
 *     RmgrSrv_RmGetMaxResidentCctApplications @ 0x180037360 (RmgrSrv_RmGetMaxResidentCctApplications.c)
 *     RmgrSrv_RmGetMemoryUsageLevel @ 0x180037480 (RmgrSrv_RmGetMemoryUsageLevel.c)
 *     RmgrSrv_RmGetNotification @ 0x1800375F0 (RmgrSrv_RmGetNotification.c)
 *     RmgrSrv_RmTestGetApplicationProperties @ 0x180037730 (RmgrSrv_RmTestGetApplicationProperties.c)
 *     RmgrSrv_RmTestGetRegisteredExternalResources @ 0x180037A30 (RmgrSrv_RmTestGetRegisteredExternalResources.c)
 *     RmgrSrv_RmTestGetResourceSetInfos @ 0x180037B70 (RmgrSrv_RmTestGetResourceSetInfos.c)
 *     RmgrSrv_RmTestGetResourceSetTypeFromPSMKey @ 0x180037CB0 (RmgrSrv_RmTestGetResourceSetTypeFromPSMKey.c)
 *     RmgrSrv_RmTestGetResourceSetTypeFromPid @ 0x180037EF0 (RmgrSrv_RmTestGetResourceSetTypeFromPid.c)
 *     RmgrSrv_SHGetResourceManagementValue @ 0x180038070 (RmgrSrv_SHGetResourceManagementValue.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18003C414 (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003D984 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DC2C (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DD2C (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DE4C (-ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18003DEF0 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18003E090 (-RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 *     ?TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x18003E2B8 (-TerminateModernHost@ResourceManager@ExecutionModel@@SAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x18003E488 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@Executio.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18003E654 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003EF10 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003F1F0 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F32C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003F3F0 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003F56C (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003F730 (-RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z @ 0x18003F844 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z.c)
 *     RmpActivityHostApplyLimits @ 0x18003FA20 (RmpActivityHostApplyLimits.c)
 *     RmpEnforcementEmptySignalAbort @ 0x1800402D8 (RmpEnforcementEmptySignalAbort.c)
 *     RmpEnforcementInfoInitializeProcess @ 0x180040370 (RmpEnforcementInfoInitializeProcess.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800423AC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042980 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180042E8C (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x1800430E4 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x180044E48 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2.c)
 *     ?RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180044FC0 (-RecvCallback@ExternalResourceSet@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PE.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004557C (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004567C (-LogRevocationEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180045910 (-OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180045C50 (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180045D40 (-TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180046134 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180046264 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180046348 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800463AC (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18004644C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180046590 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     RmpGpuMonitorDisableForHost @ 0x1800467C4 (RmpGpuMonitorDisableForHost.c)
 *     RmpGpuMonitorEnableForHost @ 0x1800468B0 (RmpGpuMonitorEnableForHost.c)
 *     RmpCoreApiSetHostLimits @ 0x180046C70 (RmpCoreApiSetHostLimits.c)
 *     ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180046ED0 (-RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     RmpActivityHostQueryGpuInterferenceCounter @ 0x180047008 (RmpActivityHostQueryGpuInterferenceCounter.c)
 *     RmpActivityHostQueryRawCommit @ 0x180047154 (RmpActivityHostQueryRawCommit.c)
 *     RmpEnforcementUpdateFreezeState @ 0x180047338 (RmpEnforcementUpdateFreezeState.c)
 *     RmpSystemEnableAsyncInSwap @ 0x1800475B4 (RmpSystemEnableAsyncInSwap.c)
 *     RmpSystemTrimSystemProcessPrivateWorkingSet @ 0x18004785C (RmpSystemTrimSystemProcessPrivateWorkingSet.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)off_180071068;
  v6 = *(unsigned __int16 *)off_180071068;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}
