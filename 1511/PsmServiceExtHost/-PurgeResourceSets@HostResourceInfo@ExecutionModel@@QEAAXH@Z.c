/*
 * XREFs of ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x1800137F0
 * Callers:
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?SetApplied@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x1800145B4 (-SetApplied@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x18001FB3C (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::HostResourceInfo::PurgeResourceSets(ExecutionModel::HostResourceInfo *this)
{
  _QWORD *v2; // rdi
  ExecutionModel::ResourceSetImpl *v3; // rbx
  ExecutionModel::ResourceSetImpl *v4; // rcx
  __int64 (__fastcall *v5)(ExecutionModel::ResourceSetImpl *__hidden); // rbp
  _QWORD *v6; // rsi
  ExecutionModel::ResourceSetImpl *v7; // rbx
  ExecutionModel::ResourceSetImpl *v8; // [rsp+40h] [rbp+8h] BYREF
  ExecutionModel::HostResourceInfo *v9; // [rsp+50h] [rbp+18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v9,
    (__int64)this);
  v2 = (_QWORD *)((char *)this + 112);
  while ( (_QWORD *)*v2 != v2 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v8,
      *(_QWORD *)(*v2 + 16LL));
    v3 = v8;
    ExecutionModel::ResourceSetImpl::SetApplied(v8, 0);
    if ( (*((_BYTE *)v3 + 30) & 1) != 0 )
    {
      v5 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)v3 + 120LL);
      if ( v5 == ExecutionModel::ResourceSetImpl::ReleaseResources )
        ExecutionModel::ResourceSetImpl::ReleaseResources(v4);
      else
        v5(v3);
    }
    else
    {
      utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
        (char *)this + 112,
        &v10,
        *v2);
    }
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v8);
  }
  v6 = (_QWORD *)((char *)this + 136);
  while ( (_QWORD *)*v6 != v6 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v8,
      *(_QWORD *)(*v6 + 16LL));
    v7 = v8;
    ExecutionModel::ResourceSetImpl::SetApplied(v8, 0);
    if ( (*((_BYTE *)v7 + 30) & 1) != 0 )
      (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v7 + 120LL))(v7);
    else
      utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
        v6,
        &v10,
        *v6);
    ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v8);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
}
