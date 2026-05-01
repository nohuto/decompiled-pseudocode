/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@PEAX@Z @ 0x180003A68 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 *     ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54 (-CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimi.c)
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180003BB0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x1800061B0 (-CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@.c)
 *     ?CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@PEAPEAUIUnknown@@@Z @ 0x180007854 (-CreateInstance@HostResourceInfo@ExecutionModel@@SAJPEAVApplicationPackageInfo@2@AEBU_AppModelAc.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x180013544 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActi.c)
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180013B80 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@KPEA_NPEAUIResourceSet@2@@Z @ 0x180014280 (-TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU.c)
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x180015640 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     ?Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAX@Z @ 0x180015D3C (-Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PE.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z @ 0x18001D83C (-CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z.c)
 *     ?Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z @ 0x180020910 (-Handle_ClientRundown@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAXPEAX@Z.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180020B18 (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x180022F74 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x1800237D0 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 *     ?SetCallback@ModernResourceEnforcer@@UEAAJPEAUIModernResourceEnforcerCallback@@@Z @ 0x180023E80 (-SetCallback@ModernResourceEnforcer@@UEAAJPEAUIModernResourceEnforcerCallback@@@Z.c)
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180023EB8 (-Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTE.c)
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x18002407C (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x180024840 (-StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180024FC8 (-InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResou.c)
 *     ?Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@2@PEAUIResourcePolicyStore@2@PEAUIRMExecServicesProvider@2@@Z @ 0x180025294 (-Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIRes.c)
 *     ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180025368 (-CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesPro.c)
 *     ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180025614 (-Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEA.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x1800256A4 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 *     ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x180035DC0 (--0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHos.c)
 *     ?RemoveAndDestroyResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180036490 (-RemoveAndDestroyResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJAEAV-$_Dl.c)
 *     ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x180036508 (-AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEA.c)
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180038C58 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180039004 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800396F4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x180039BF4 (-Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18004CBAC (-ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@.c)
 *     ??$_RotateNoSwap@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@YA_NAEAV?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@0@PEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@11@Z @ 0x18004D770 (--$_RotateNoSwap@V-$allocator@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@.c)
 *     ?FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourceSet@2@@Z @ 0x18004DC5C (-FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourc.c)
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
