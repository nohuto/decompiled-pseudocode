/*
 * XREFs of RmpObjectRelease @ 0x180002ED0
 * Callers:
 *     ?RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180001708 (-RmpQoSDisableWatchdogForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800042B0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B470 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000E498 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000F040 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA54 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012750 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180015470 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PE.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800162B0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800167D0 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     RmpEnforcementWorkCallback @ 0x180016C10 (RmpEnforcementWorkCallback.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     RmpCoreApiSetHostLimits @ 0x180019198 (RmpCoreApiSetHostLimits.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x18001F990 (-RmpEnforcerJobCompletionThread@@YAKPEAX@Z.c)
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x180029578 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_K@Z @ 0x18002A250 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002A430 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpEnforcementInfoInitializeProcess @ 0x18002B260 (RmpEnforcementInfoInitializeProcess.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002BEE8 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18002CB60 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002D974 (-RmSrvGameModeDisableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z @ 0x18002DB54 (-RmSrvGameModeEnableForHost@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpCoreApiRegisterActivityHostByJobHandle @ 0x18002E200 (RmpCoreApiRegisterActivityHostByJobHandle.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x18002E348 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 *     RmpCoreApiUnregisterActivityHost @ 0x18002E450 (RmpCoreApiUnregisterActivityHost.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18002F144 (RmpActivityHostFindPsmResourceSets.c)
 *     RmpActivityHostRemoveFromRemediationGroup @ 0x18002F518 (RmpActivityHostRemoveFromRemediationGroup.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180037304 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     RmpEmptyWorkerCleanup @ 0x180002F5C (RmpEmptyWorkerCleanup.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void __fastcall RmpObjectRelease(volatile signed __int32 *P)
{
  int v2; // eax
  void *v3; // rcx
  void *v4; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v2 = _InterlockedDecrement(P + 4);
  if ( v2 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v2 )
  {
    if ( !*((_DWORD *)P + 8) )
    {
      RmpEmptyWorkerCleanup(P + 220);
      if ( *((_DWORD *)P + 12) == 1 )
      {
        v3 = (void *)*((_QWORD *)P + 91);
        if ( v3 )
          CloseHandle(v3);
        v4 = (void *)*((_QWORD *)P + 92);
        if ( v4 )
          CloseHandle(v4);
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
}
