/*
 * XREFs of ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230
 * Callers:
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x180001344 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180001B50 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ??1?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006CF0 (--1-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180009594 (-IsApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAHV-$CComPtr@VResourceSet@ExecutionMo.c)
 *     ?PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180009AC0 (-PurgeResourceSets@ModernActivationResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ @ 0x18000E4D0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FDD8 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180010E60 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180010ED4 (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?Release@ResourceSet@ExecutionModel@@WFFI@EAAKXZ @ 0x180025160 (-Release@ResourceSet@ExecutionModel@@WFFI@EAAKXZ.c)
 *     ?SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002EFA8 (-SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ??1?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F1C0 (--1-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F21C (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPEAVResourceSet@2@@Z @ 0x180034DCC (-CheckAllPreemtableResourceSets@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@PEAPE.c)
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x180035404 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800378B4 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x180038BC8 (-SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x18003DD60 (--_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@ResourceSetType@2@@Z @ 0x18003E7FC (-GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@Resou.c)
 * Callees:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180010B40 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Release(ExecutionModel::ResourceSet *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(ExecutionModel::ResourceSet *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 39);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(ExecutionModel::ResourceSet *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == ExecutionModel::ResourceSet::`scalar deleting destructor' )
      ExecutionModel::ResourceSet::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
