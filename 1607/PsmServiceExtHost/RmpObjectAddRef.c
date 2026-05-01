/*
 * XREFs of RmpObjectAddRef @ 0x180006058
 * Callers:
 *     ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001730 (-RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     RmpActivityHostCompleteInitialization @ 0x1800060A4 (RmpActivityHostCompleteInitialization.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B470 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000F040 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpActivityHostApplyResourceSet @ 0x180013ED0 (RmpActivityHostApplyResourceSet.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x180018374 (RmpEnforcementArmWorkerForActivityHost.c)
 *     ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002A570 (-RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     RmpEnforcementInfoInitializeProcess @ 0x18002B260 (RmpEnforcementInfoInitializeProcess.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x18002EC24 (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18002F058 (RmpActivityHostFindMixedHostForPsmId.c)
 *     RmpActivityHostUpdateCommitUseAsync @ 0x18002F7EC (RmpActivityHostUpdateCommitUseAsync.c)
 *     RmpOfferLazyDecommitCheckQueueWork @ 0x1800346F4 (RmpOfferLazyDecommitCheckQueueWork.c)
 *     RmpObjectTableEnumerationGetNext @ 0x1800352C0 (RmpObjectTableEnumerationGetNext.c)
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180037304 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void __fastcall RmpObjectAddRef(__int64 a1)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) < 1 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
}
