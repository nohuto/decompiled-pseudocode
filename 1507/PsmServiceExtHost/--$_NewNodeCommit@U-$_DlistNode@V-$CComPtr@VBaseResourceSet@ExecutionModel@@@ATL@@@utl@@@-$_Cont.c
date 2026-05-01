/*
 * XREFs of ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180010ED4
 * Callers:
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180004E9C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18002F280 (--$emplace@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@-$list@V-$CComPtr@VBaseResourceSet.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
        __int64 a1,
        __int64 *a2,
        char a3)
{
  __int64 result; // rax
  ExecutionModel::ResourceSet *v4; // rbx
  __int64 (__fastcall *v5)(ExecutionModel::BaseResourceSet *); // rdi

  result = *a2;
  if ( a3 )
  {
    *a2 = 0LL;
  }
  else if ( result )
  {
    v4 = *(ExecutionModel::ResourceSet **)(result + 16);
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v4 + 16LL);
      if ( v5 == ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v4);
      }
      else if ( v5 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v4);
      }
      else
      {
        v5(v4);
      }
    }
    return 0LL;
  }
  return result;
}
