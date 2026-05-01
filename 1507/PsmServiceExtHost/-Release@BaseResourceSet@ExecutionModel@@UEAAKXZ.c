/*
 * XREFs of ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20
 * Callers:
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x180001344 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180010E60 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180010ED4 (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54 (-SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4En.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F21C (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180037D0C (-ResetResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x18003FEA0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::Release(ExecutionModel::BaseResourceSet *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 39);
  if ( !v1 && this )
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
