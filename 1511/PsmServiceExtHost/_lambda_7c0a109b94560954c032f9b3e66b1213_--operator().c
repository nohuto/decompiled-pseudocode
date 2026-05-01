/*
 * XREFs of _lambda_7c0a109b94560954c032f9b3e66b1213_::operator() @ 0x18004D8E8
 * Callers:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 * Callees:
 *     ??$_InsertMany@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA?AV?$_ArrayIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@V?$_ArrayConstIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@1@1Uforward_iterator_tag@1@@Z @ 0x18004D62C (--$_InsertMany@AEAV-$_DlistIt@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResour.c)
 */

__int64 __fastcall lambda_7c0a109b94560954c032f9b3e66b1213_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  if ( !*(_QWORD *)(a3 + 16) )
    return 0LL;
  v5 = *(_QWORD **)a3;
  v4 = a3;
  utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_InsertMany<utl::_DlistIt<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>> &>(
    a2,
    &v6,
    a2[1],
    &v5,
    &v4);
  if ( v6 )
    return 0LL;
  else
    return 2147942414LL;
}
