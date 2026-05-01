/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0
 * Callers:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180001A44 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 * Callees:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800041D0 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(_QWORD *a1, ExecutionModel::ResourceSet *a2)
{
  _QWORD *i; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  _QWORD *v8; // rcx

  for ( i = (_QWORD *)*a1; i != a1 && *(_DWORD *)(i[2] + 1360LL) < *((_DWORD *)a2 + 340); i = (_QWORD *)*i )
    ;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18003CF1B);
  v6 = v5;
  if ( !v5 )
    return 2147942414LL;
  v5[2] = a2;
  if ( a2 )
  {
    v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL);
    if ( v7 == ExecutionModel::ResourceSet::AddRef )
    {
      ExecutionModel::ResourceSet::AddRef(a2);
    }
    else if ( (char *)v7 == (char *)ExecutionModel::ExternalResourceSet::AddRef )
    {
      ExecutionModel::ExternalResourceSet::AddRef(a2);
    }
    else
    {
      v7(a2);
    }
  }
  if ( !v6 )
    return 2147942414LL;
  v8 = (_QWORD *)i[1];
  v6[1] = v8;
  *v6 = i;
  *v8 = v6;
  i[1] = v6;
  ++a1[2];
  return 0LL;
}
