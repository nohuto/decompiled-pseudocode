/*
 * XREFs of ?UndoSetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18003E894
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x180036864 (-push_back@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 */

void __fastcall ExecutionModel::ModernActivationResourceInfo::UndoSetAsApplied(
        ExecutionModel::ModernActivationResourceInfo *this,
        struct ExecutionModel::ResourceSet *a2)
{
  ExecutionModel::ResourceSet *v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r8
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rbx
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rdi
  ExecutionModel::ResourceSet *v9; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v9,
    (__int64)a2);
  v4 = v9;
  v5 = (__int64 *)*((_QWORD *)this + 3);
  while ( v5 != (__int64 *)((char *)this + 24) )
  {
    if ( (ExecutionModel::ResourceSet *)v5[2] == v4 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
      utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
        (__int64)this + 24,
        &v9,
        v6);
    }
    else
    {
      v5 = (__int64 *)*v5;
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
    &v9,
    (__int64)a2);
  utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::push_back(
    (__int64)this,
    (__int64 *)&v9);
  if ( v9 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL);
    if ( v8 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v9);
    else
      v8(v9);
  }
  QueryUnbiasedInterruptTime((PULONGLONG)(*((_QWORD *)a2 + 175) + 928LL));
}
