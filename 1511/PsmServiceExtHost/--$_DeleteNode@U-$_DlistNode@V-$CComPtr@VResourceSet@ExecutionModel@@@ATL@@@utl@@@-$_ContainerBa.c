/*
 * XREFs of ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000B350
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000ED00 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800065E0 (--1-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>(
        __int64 a1,
        ExecutionModel::ResourceSet **a2)
{
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::~CComPtrBase<ExecutionModel::ResourceSet>(a2 + 2);
  operator delete(a2);
}
