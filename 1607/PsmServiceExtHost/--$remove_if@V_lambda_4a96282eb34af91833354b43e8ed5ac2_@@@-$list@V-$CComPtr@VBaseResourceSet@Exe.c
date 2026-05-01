/*
 * XREFs of ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180001A44 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180004270 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  ExecutionModel::ResourceSet *v7; // rcx
  void (*v8)(void); // rax
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v2 = *a1;
  while ( v2 != (__int64 *)a1 )
  {
    if ( v2[2] == *a2 )
    {
      v4 = v2;
      v2 = (__int64 *)*v2;
      v5 = (__int64 *)v4[1];
      v6 = *v4;
      *v5 = *v4;
      *(_QWORD *)(v6 + 8) = v5;
      v7 = (ExecutionModel::ResourceSet *)v4[2];
      if ( v7 )
      {
        v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
        if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v7);
        }
        else if ( (char *)v8 == (char *)ExecutionModel::ExternalResourceSet::Release )
        {
          ExecutionModel::ExternalResourceSet::Release(v7);
        }
        else
        {
          v8();
        }
      }
      operator delete(v4);
      a1[2] = (__int64 *)((char *)a1[2] - 1);
      a2 = v9;
    }
    else
    {
      v2 = (__int64 *)*v2;
    }
  }
}
