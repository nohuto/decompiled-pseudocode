/*
 * XREFs of ?SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002EFA8
 * Callers:
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x18002F104 (-push_back@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::SetAsApplied(
        ExecutionModel::ModernActivationResourceInfo *this,
        struct ExecutionModel::ResourceSet *a2)
{
  ExecutionModel::ResourceSet *v4; // rdi
  ExecutionModel::ResourceSet *v5; // rbx
  ExecutionModel::ResourceSet **v6; // r8
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rbx
  ExecutionModel::ModernActivationResourceInfo *v8; // rbx
  ExecutionModel::ResourceSet *v9; // rdi
  ExecutionModel::ResourceSet **v10; // r8
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *); // rbx
  __int64 (__fastcall *v12)(ExecutionModel::ResourceSet *); // rdi
  ExecutionModel::ResourceSet *v13; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v13,
    (__int64)a2);
  v4 = v13;
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 6);
  while ( v5 != (ExecutionModel::ModernActivationResourceInfo *)((char *)this + 48) )
  {
    if ( *((ExecutionModel::ResourceSet **)v5 + 2) == v4 )
    {
      v6 = (ExecutionModel::ResourceSet **)v5;
      v5 = *(ExecutionModel::ResourceSet **)v5;
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this + 48,
        &v13,
        v6);
    }
    else
    {
      v5 = *(ExecutionModel::ResourceSet **)v5;
    }
  }
  if ( v4 )
  {
    v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v7 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v4);
    else
      v7(v4);
  }
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v13,
    (__int64)a2);
  v8 = *(ExecutionModel::ModernActivationResourceInfo **)this;
  v9 = v13;
  while ( v8 != this )
  {
    if ( *((ExecutionModel::ResourceSet **)v8 + 2) == v9 )
    {
      v10 = (ExecutionModel::ResourceSet **)v8;
      v8 = *(ExecutionModel::ModernActivationResourceInfo **)v8;
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this,
        &v13,
        v10);
    }
    else
    {
      v8 = *(ExecutionModel::ModernActivationResourceInfo **)v8;
    }
  }
  if ( v9 )
  {
    v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL);
    if ( v11 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v9);
    else
      v11(v9);
  }
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v13,
    (__int64)a2);
  utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::push_back(
    (char *)this + 24,
    &v13);
  if ( v13 )
  {
    v12 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v13 + 16LL);
    if ( v12 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v13);
    else
      v12(v13);
  }
  QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)a2 + 175) + 896LL));
}
