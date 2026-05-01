/*
 * XREFs of ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180011DB0
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18000F7D8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800350C8 (--$emplace@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@-$list@V-$CComPtr@VBaseResourceSet.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180035210 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

ExecutionModel::BaseResourceSet **__fastcall ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
        ExecutionModel::BaseResourceSet **a1,
        ExecutionModel::BaseResourceSet *a2)
{
  __int64 (__fastcall *v3)(ExecutionModel::BaseResourceSet *); // rax

  *a1 = a2;
  if ( a2 )
  {
    v3 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)a2 + 8LL);
    if ( v3 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(a2);
    else
      v3(a2);
  }
  return a1;
}
