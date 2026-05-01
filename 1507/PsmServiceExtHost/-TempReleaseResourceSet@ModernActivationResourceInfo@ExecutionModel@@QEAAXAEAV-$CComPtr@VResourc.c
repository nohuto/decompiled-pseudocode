/*
 * XREFs of ?TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180038C58
 * Callers:
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ??$_NewNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAA?AV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@XZ @ 0x180010F00 (--$_NewNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBase@.c)
 *     ?TryUnapplyResourceSet@ModernActivationResourceInfo@ExecutionModel@@AEAA_NPEAVResourceSet@2@@Z @ 0x18002EE80 (-TryUnapplyResourceSet@ModernActivationResourceInfo@ExecutionModel@@AEAA_NPEAVResourceSet@2@@Z.c)
 */

BOOL __fastcall ExecutionModel::ModernActivationResourceInfo::TempReleaseResourceSet(
        ExecutionModel::ModernActivationResourceInfo *this,
        struct ExecutionModel::ResourceSet **a2)
{
  ExecutionModel::ModernActivationResourceInfo *v2; // rbx
  ExecutionModel::ResourceSet **v5; // r8
  char *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  ExecutionModel::ResourceSet *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  while ( v2 != this )
  {
    if ( *((struct ExecutionModel::ResourceSet **)v2 + 2) == *a2 )
    {
      v5 = (ExecutionModel::ResourceSet **)v2;
      v2 = *(ExecutionModel::ModernActivationResourceInfo **)v2;
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this,
        &v12,
        v5);
    }
    else
    {
      v2 = *(ExecutionModel::ModernActivationResourceInfo **)v2;
    }
  }
  ExecutionModel::ModernActivationResourceInfo::TryUnapplyResourceSet(this, *a2);
  v6 = (char *)this + 48;
  utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_NewNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>(
    v7,
    &v11);
  v8 = v11;
  if ( v11 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      v11 + 2,
      (__int64)*a2);
    v9 = (_QWORD *)*((_QWORD *)v6 + 1);
    v8[1] = v9;
    *v8 = v6;
    *v9 = v8;
    *((_QWORD *)v6 + 1) = v8;
    ++*((_QWORD *)v6 + 2);
  }
  return QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)*a2 + 175) + 896LL));
}
