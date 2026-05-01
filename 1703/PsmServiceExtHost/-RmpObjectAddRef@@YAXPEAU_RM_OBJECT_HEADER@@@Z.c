/*
 * XREFs of ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754
 * Callers:
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001364 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180003D7C (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004944 (-RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800055F0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180009AE0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CC60 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180011CF4 (-RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180012F20 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800162F4 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800175D8 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180017634 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800194BC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E060 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EC0C (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F8CC (-RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FB60 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003251C (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z @ 0x180032AF0 (-RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800345B0 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180035350 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpObjectAddRef(struct _RM_OBJECT_HEADER *a1)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 4) < 1 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
}
