/*
 * XREFs of ?SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18002EB70
 * Callers:
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x18002F104 (-push_back@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::SetAsAcquired(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::IResourceSet *a2)
{
  unsigned int v3; // edi
  ExecutionModel::ResourceSetImpl *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v5,
    (__int64)a2);
  LOBYTE(this) = (unsigned __int8)utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::push_back(
                                    (char *)this + 80,
                                    &v5) == 0;
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v5);
  if ( (_BYTE)this )
    return (unsigned int)-2147024882;
  return v3;
}
