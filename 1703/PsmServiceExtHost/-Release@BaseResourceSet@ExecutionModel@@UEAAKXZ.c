/*
 * XREFs of ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18000EE70 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18000F7D8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180010C50 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800192A0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18001D7A0 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180029338 (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180029394 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033820 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180035210 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::Release(ExecutionModel::BaseResourceSet *this)
{
  int v1; // ebx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 39);
  if ( v1 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v1 && this )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return (unsigned int)v1;
}
