/*
 * XREFs of __security_check_cookie @ 0x180006040
 * Callers:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800031D0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800036A0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     RmpClientInitializeCoreApi @ 0x180004BE0 (RmpClientInitializeCoreApi.c)
 *     TraceLoggingRegisterEx @ 0x180004C6C (TraceLoggingRegisterEx.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180004FB0 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x18000587C (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@.c)
 *     ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x1800059B0 (-get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180005A4C (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     __GSHandlerCheckCommon @ 0x1800065E0 (__GSHandlerCheckCommon.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x180008E90 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 *     RmpClientConnectionAllocateState @ 0x180009AC0 (RmpClientConnectionAllocateState.c)
 *     RmpClientSubscriptionWnfCallback @ 0x18000A4F0 (RmpClientSubscriptionWnfCallback.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000B0C0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000B0C0.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x18000B1A0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000B2E0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000B3EC (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000BA10 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x18000BC60 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000C2E0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x18000C340 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000C7B0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000D0B0 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
