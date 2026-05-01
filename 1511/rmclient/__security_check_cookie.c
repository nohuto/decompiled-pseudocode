/*
 * XREFs of __security_check_cookie @ 0x180008E40
 * Callers:
 *     ?GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x1800013BC (-GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x180001BD0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 *     ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180001D30 (-get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003BE0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003FB0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180004F50 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x1800061C0 (GetNormalizedObjectPath.c)
 *     QuerySecurityDescriptorValue @ 0x180006390 (QuerySecurityDescriptorValue.c)
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800070C0 (RmpBindToRmRpcServer.c)
 *     RmpClientInitializeCoreApi @ 0x1800071DC (RmpClientInitializeCoreApi.c)
 *     TraceLoggingRegisterEx @ 0x1800072E8 (TraceLoggingRegisterEx.c)
 *     ?InitializeWnfStateName@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800075B4 (-InitializeWnfStateName@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ?RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z @ 0x180007844 (-RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180007EBC (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     __GSHandlerCheckCommon @ 0x1800094D8 (__GSHandlerCheckCommon.c)
 *     RmpClientTraceWnfMessageDropped @ 0x18000EB84 (RmpClientTraceWnfMessageDropped.c)
 *     RmpClientConnectToResourceManager @ 0x18000ECD0 (RmpClientConnectToResourceManager.c)
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180011C20 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 *     Template_zq @ 0x180011DC0 (Template_zq.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800125E0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x1800129A0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_1800129A0.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012C50 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012D70 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012D70.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x180012E80 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012E80.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012F60 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180013330 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180013460 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@Resou_ea_180013460.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x180013780 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x180013930 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013E00 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014420 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x180014480 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180014AB0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800153CC (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
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
