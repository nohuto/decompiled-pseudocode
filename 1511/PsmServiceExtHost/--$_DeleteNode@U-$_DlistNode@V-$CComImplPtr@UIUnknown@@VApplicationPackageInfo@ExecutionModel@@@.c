/*
 * XREFs of ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@1@@Z @ 0x1800062D4
 * Callers:
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ??1ApplicationPackageInfo@ExecutionModel@@UEAA@XZ @ 0x18001B9F4 (--1ApplicationPackageInfo@ExecutionModel@@UEAA@XZ.c)
 *     ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x18004D3A4 (--1HostResources@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall utl::_ContainerBase<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>(
        __int64 a1,
        char *a2)
{
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(a2 + 16);
  operator delete(a2);
}
