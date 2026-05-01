/*
 * XREFs of ?_SetCapacity@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K@Z @ 0x18004E2A8
 * Callers:
 *     ??$_InsertMany@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA?AV?$_ArrayIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@V?$_ArrayConstIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@1@1Uforward_iterator_tag@1@@Z @ 0x18004D62C (--$_InsertMany@AEAV-$_DlistIt@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResour.c)
 *     ?_Rotate@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K0@Z @ 0x18004E1F8 (-_Rotate@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Uninit@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAAXXZ @ 0x18004E38C (-_Uninit@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 */

char __fastcall utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_SetCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  char *v6; // rbp
  __int64 *v7; // r15
  char v8; // si
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  char *v11; // [rsp+30h] [rbp-28h]

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v4 = 0LL;
    *(_QWORD *)&v10 = 0LL;
  }
  else
  {
    v4 = operator new(8 * a2, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v10 = v4;
  }
  *((_QWORD *)&v10 + 1) = v4;
  v5 = v4;
  if ( v4 )
    v6 = (char *)&v4[a2];
  else
    v6 = 0LL;
  v11 = v6;
  if ( v4 )
  {
    v7 = *(__int64 **)a1;
    v8 = 1;
    while ( v7 != *(__int64 **)(a1 + 8) )
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        v5++,
        *v7++);
    utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Uninit(a1);
    v11 = 0LL;
    v10 = 0LL;
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
  }
  else
  {
    v8 = 0;
  }
  utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Uninit(&v10);
  return v8;
}
