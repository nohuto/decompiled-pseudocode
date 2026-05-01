/*
 * XREFs of ?_Rotate@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K0@Z @ 0x18004E1F8
 * Callers:
 *     ??$_InsertMany@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA?AV?$_ArrayIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@V?$_ArrayConstIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@1@1Uforward_iterator_tag@1@@Z @ 0x18004D62C (--$_InsertMany@AEAV-$_DlistIt@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResour.c)
 * Callees:
 *     ??$_RotateNoSwap@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@YA_NAEAV?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@0@PEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@11@Z @ 0x18004D770 (--$_RotateNoSwap@V-$allocator@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@.c)
 *     ?_SetCapacity@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K@Z @ 0x18004E2A8 (-_SetCapacity@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allo.c)
 */

char __fastcall utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  char v7; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  if ( a2 == a3 || a3 == (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 )
    return 1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  if ( *(_QWORD *)(a1 + 8) != v6 )
    goto LABEL_13;
  v8 = (v6 - *(_QWORD *)a1) >> 3;
  v9 = 7 * (v8 >> 2) + 8;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL )
    v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 < v9
    && (unsigned __int8)utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_SetCapacity(
                          a1,
                          v9) )
  {
LABEL_13:
    if ( utl::_RotateNoSwap<utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>,CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>(
           v6,
           (__int64 *)(*(_QWORD *)a1 + 8 * a2),
           (struct IUnknown **)(*(_QWORD *)a1 + 8 * a3),
           *(struct IUnknown ***)(a1 + 8)) )
    {
      return 1;
    }
  }
  return v7;
}
