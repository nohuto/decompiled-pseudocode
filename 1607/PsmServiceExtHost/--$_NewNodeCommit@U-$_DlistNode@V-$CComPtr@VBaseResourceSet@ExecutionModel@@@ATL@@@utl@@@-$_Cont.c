/*
 * XREFs of ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x1800284CC
 * Callers:
 *     ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800371B4 (-push_front@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBa.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
        __int64 a1,
        __int64 *a2,
        char a3)
{
  __int64 result; // rax
  ExecutionModel::BaseResourceSet *v4; // rcx
  void (*v5)(void); // rax

  result = *a2;
  if ( a3 )
  {
    *a2 = 0LL;
  }
  else if ( result )
  {
    v4 = *(ExecutionModel::BaseResourceSet **)(result + 16);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( (char *)v5 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v4);
      }
      else if ( (char *)v5 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v4);
      }
      else
      {
        v5();
      }
    }
    return 0LL;
  }
  return result;
}
