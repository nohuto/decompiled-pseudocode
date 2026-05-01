/*
 * XREFs of ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@@Z @ 0x18001FB88
 * Callers:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x18001FB3C (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall utl::_ContainerBase<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>(
        __int64 a1,
        char *a2)
{
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(a2 + 16);
  operator delete(a2);
}
