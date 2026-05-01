/*
 * XREFs of ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180010C50
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x18000F018 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18000FB1C (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000FD60 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@W4Enum@Priority@5@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18001B2E8 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // rax
  ExecutionModel::ResourceSet *v5; // rcx
  void (*v6)(void); // rax

  while ( 1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v3 = (__int64 *)v2[1];
    v4 = *v2;
    *v3 = *v2;
    *(_QWORD *)(v4 + 8) = v3;
    v5 = (ExecutionModel::ResourceSet *)v2[2];
    if ( v5 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v5);
      }
      else if ( (char *)v6 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v5);
      }
      else
      {
        v6();
      }
    }
    operator delete(v2);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
