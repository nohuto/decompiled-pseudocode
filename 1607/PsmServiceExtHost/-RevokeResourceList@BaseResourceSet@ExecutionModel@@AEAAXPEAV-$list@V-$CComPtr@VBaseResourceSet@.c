/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180037108
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180036C48 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 */

_UNKNOWN **__fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::BaseResourceSet *a1,
        __int64 ***a2,
        __int64 a3,
        int a4)
{
  _UNKNOWN **result; // rax
  __int64 **i; // rdi
  ExecutionModel::BaseResourceSet *v8; // rbx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  ExecutionModel::BaseResourceSet *v11; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v11 = a1;
  for ( i = *a2; i != (__int64 **)a2; i = (__int64 **)*i )
  {
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
      &v11,
      (ExecutionModel::ResourceSet *)i[2]);
    v8 = v11;
    if ( *((int *)v11 + 340) >= 0 )
      ExecutionModel::ExternalResourceSet::Revoke(v11, a4);
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == ExecutionModel::BaseResourceSet::Release )
    {
      result = (_UNKNOWN **)ExecutionModel::BaseResourceSet::Release(v8);
    }
    else if ( v9 == ExecutionModel::ResourceSet::Release )
    {
      result = (_UNKNOWN **)ExecutionModel::ResourceSet::Release(v8);
    }
    else
    {
      result = (_UNKNOWN **)v9(v8);
    }
  }
  return result;
}
