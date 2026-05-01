/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180035210
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180011DB0 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18001C37C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::BaseResourceSet *a1,
        __int64 ***a2,
        __int64 a3,
        unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 **i; // rdi
  ExecutionModel::BaseResourceSet *v8; // rbx
  __int64 (__fastcall *v9)(ExecutionModel::BaseResourceSet *); // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  ExecutionModel::BaseResourceSet *v11; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v11 = a1;
  for ( i = *a2; i != (__int64 **)a2; i = (__int64 **)*i )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(
      &v11,
      (ExecutionModel::BaseResourceSet *)i[2]);
    v8 = v11;
    if ( *((int *)v11 + 340) >= 0 )
      ExecutionModel::ExternalResourceSet::Revoke(v11, a4);
    v9 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == ExecutionModel::ResourceSet::Release )
    {
      result = (_UNKNOWN **)ExecutionModel::ResourceSet::Release(v8);
    }
    else if ( v9 == ExecutionModel::BaseResourceSet::Release )
    {
      result = (_UNKNOWN **)ExecutionModel::BaseResourceSet::Release(v8);
    }
    else
    {
      result = (_UNKNOWN **)v9(v8);
    }
  }
  return result;
}
