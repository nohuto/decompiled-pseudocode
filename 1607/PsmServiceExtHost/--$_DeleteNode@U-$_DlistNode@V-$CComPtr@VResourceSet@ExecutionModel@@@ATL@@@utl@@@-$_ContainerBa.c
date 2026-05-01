/*
 * XREFs of ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180035354
 * Callers:
 *     ??1ResourceSet@ExecutionModel@@UEAA@XZ @ 0x180012A28 (--1ResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall utl::_ContainerBase<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::ResourceSet>>>(
        __int64 a1,
        _QWORD *a2)
{
  ExecutionModel::ResourceSet *v2; // rcx
  void (*v4)(void); // rax

  v2 = (ExecutionModel::ResourceSet *)a2[2];
  if ( v2 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v4 == (char *)ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v2);
    else
      v4();
  }
  operator delete(a2);
}
