/*
 * XREFs of ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000F0E0
 * Callers:
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x180003968 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000ED00 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
        __int64 a1,
        ExecutionModel::ResourceSet **a2)
{
  ExecutionModel::ResourceSet *v2; // rbx
  __int64 (__fastcall *v4)(ExecutionModel::BaseResourceSet *); // rdi

  v2 = a2[2];
  if ( v2 )
  {
    v4 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v2 + 16LL);
    if ( v4 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(a2[2]);
    }
    else if ( v4 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(a2[2]);
    }
    else if ( (char *)v4 == (char *)ExecutionModel::ExternalResourceSet::Release )
    {
      ExecutionModel::ExternalResourceSet::Release(a2[2]);
    }
    else
    {
      v4(a2[2]);
    }
  }
  operator delete(a2);
}
