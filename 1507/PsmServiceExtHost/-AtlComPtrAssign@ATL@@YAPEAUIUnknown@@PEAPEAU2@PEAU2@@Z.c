/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0
 * Callers:
 *     ?Temp_PerformAcquireResourceSetFromSponsorProcess@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEA_NKPEAUIResourceSet@2@@Z @ 0x180001448 (-Temp_PerformAcquireResourceSetFromSponsorProcess@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIReso.c)
 *     ?QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_RM_REVOKE_REASON@@@Z @ 0x1800015F0 (-QueueCallback@ResourceSetImpl@ExecutionModel@@IEAAXW4WorkItemType@ResSetCallbackWorkItem@12@W4_.c)
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x180004D88 (-CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800140B4 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePo.c)
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x1800164E0 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     ?Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAX@Z @ 0x180016BBC (-Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PE.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001FD34 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@2@@Z @ 0x180020044 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceEnforcer@@PEAUIModernResourceEnfor.c)
 *     ?SetCallback@ModernResourceEnforcer@@UEAAJPEAUIModernResourceEnforcerCallback@@@Z @ 0x180020730 (-SetCallback@ModernResourceEnforcer@@UEAAJPEAUIModernResourceEnforcerCallback@@@Z.c)
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE3@@@Z @ 0x180020768 (-Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTE.c)
 *     ?Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@2@PEAUIResourcePolicyStore@2@PEAUIRMExecServicesProvider@2@@Z @ 0x180020A94 (-Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIRes.c)
 *     ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180020B5C (-CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesPro.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180020C64 (-InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResou.c)
 *     ?Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@@Z @ 0x180020FB4 (-Initialize@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourcePolicyEngine@2@PEA.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x180021044 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 *     ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x180021B00 (-StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@.c)
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 *     ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x18002E744 (--0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHos.c)
 *     ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x18002EC98 (-AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEA.c)
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800324D4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z @ 0x1800329D4 (-Handle_RS_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJKPEAK@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0 (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800401F0 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x1800470DC (-ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@.c)
 * Callees:
 *     ?AddRef@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180010F40 (-AddRef@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180016AE0 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?AddRef@ResourcePolicyStore@ExecutionModel@@UEAAKXZ @ 0x1800170D0 (-AddRef@ResourcePolicyStore@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  ULONG (__stdcall *AddRef)(IUnknown *); // rsi
  ExecutionModel::ResourceSetServerProxy *v5; // rsi
  struct IUnknown *result; // rax
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSetServerProxy *, unsigned int); // rbp

  if ( !a1 )
    return 0LL;
  if ( a2 )
  {
    AddRef = a2->lpVtbl->AddRef;
    if ( (char *)AddRef == (char *)ExecutionModel::ResourceManager::AddRef )
    {
      ExecutionModel::ResourceManager::AddRef((ExecutionModel::ResourceManager *)a2);
    }
    else if ( (char *)AddRef == (char *)ExecutionModel::ResourcePolicyStore::AddRef )
    {
      ExecutionModel::ResourcePolicyStore::AddRef((ExecutionModel::ResourcePolicyStore *)a2);
    }
    else
    {
      ((void (__fastcall *)(struct IUnknown *))AddRef)(a2);
    }
  }
  v5 = (ExecutionModel::ResourceSetServerProxy *)*a1;
  if ( *a1 )
  {
    v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *, unsigned int))(*(_QWORD *)v5 + 16LL);
    if ( v7 == ExecutionModel::ResourceSetServerProxy::Release )
      ExecutionModel::ResourceSetServerProxy::Release(v5, (unsigned int)a2);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetServerProxy *))v7)(v5);
  }
  result = a2;
  *a1 = a2;
  return result;
}
