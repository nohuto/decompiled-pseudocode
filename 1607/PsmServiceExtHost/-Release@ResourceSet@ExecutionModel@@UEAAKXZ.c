/*
 * XREFs of ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001864 (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180001A44 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x180001ECC (--_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180012580 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180012C0C (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     RmpActivityHostApplyResourceSet @ 0x180013ED0 (RmpActivityHostApplyResourceSet.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800162B0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800167D0 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180016F80 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800172E4 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800181FC (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 *     RmpActivityHostZeroProcessNotification @ 0x180019964 (RmpActivityHostZeroProcessNotification.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18001B6A8 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@WFFI@EAAKXZ @ 0x180020B70 (-Release@ResourceSet@ExecutionModel@@WFFI@EAAKXZ.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x1800284CC (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180028560 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033EF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180035354 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180037108 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180012AE0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Release(ExecutionModel::ResourceSet *this)
{
  int v1; // ebx
  void *(__fastcall *v3)(ExecutionModel::ResourceSet *__hidden, unsigned int); // rax
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
    v3 = *(void *(__fastcall **)(ExecutionModel::ResourceSet *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == ExecutionModel::ResourceSet::`scalar deleting destructor' )
      ExecutionModel::ResourceSet::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return (unsigned int)v1;
}
