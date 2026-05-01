/*
 * XREFs of ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C
 * Callers:
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x180001344 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180001B50 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180004E9C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?push_front@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18000D8E8 (-push_front@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResour.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FDD8 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180014338 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x1800164E0 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 *     ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x18002E744 (--0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHos.c)
 *     ?SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18002EB70 (-SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEAVResourceSetServerProxy@2@PEA_K@Z @ 0x18002EC98 (-AddResourceSetProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAUIResourceSet@2@PEA.c)
 *     ?SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002EFA8 (-SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x18002F104 (-push_back@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 *     ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18002F280 (--$emplace@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@-$list@V-$CComPtr@VBaseResourceSet.c)
 *     ??$emplace@AEA_KAEAV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@Z @ 0x18002F624 (--$emplace@AEA_KAEAV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180035D2C (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAA-AV-$CComPtr@VResourceSet@Execut.c)
 *     ?GetSponsor@ModernActivationResourceInfo@ExecutionModel@@QEAA?AV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@XZ @ 0x180036278 (-GetSponsor@ModernActivationResourceInfo@ExecutionModel@@QEAA-AV-$CComPtr@VResourceSet@Execution.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z @ 0x180037A40 (-ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x180038BC8 (-SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180038C58 (-TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV-$CComPtr@VResourc.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     ?GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@ResourceSetType@2@@Z @ 0x18003E7FC (-GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@Resou.c)
 *     ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180040960 (-OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 *     ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C (-ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x1800470DC (-ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
