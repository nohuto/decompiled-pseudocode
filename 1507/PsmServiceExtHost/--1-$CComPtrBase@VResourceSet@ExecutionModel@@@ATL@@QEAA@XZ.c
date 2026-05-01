/*
 * XREFs of ??1?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006CF0
 * Callers:
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18002F194 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerBa.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

unsigned int __fastcall ATL::CComPtrBase<ExecutionModel::ResourceSet>::~CComPtrBase<ExecutionModel::ResourceSet>(
        ExecutionModel::ResourceSet **a1)
{
  unsigned int (__fastcall *v1)(ExecutionModel::ResourceSet *__hidden); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v1 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::ResourceSet::Release )
      return ExecutionModel::ResourceSet::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
