/*
 * XREFs of ?ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z @ 0x180037A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x18002F104 (-push_back@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800378B4 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ReclaimMemory(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::IReclaimMemoryCallback *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = ExecutionModel::ResourceManager::ReclaimMemory(this);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v6,
        (__int64)a2);
      utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::push_back(
        (__int64)this + 136,
        &v6);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v4 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v4;
}
