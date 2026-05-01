/*
 * XREFs of ??$_InsertMany@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA?AV?$_ArrayIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@V?$_ArrayConstIt@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@1@AEAV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@1@1Uforward_iterator_tag@1@@Z @ 0x18004D62C
 * Callers:
 *     _lambda_7c0a109b94560954c032f9b3e66b1213_::operator() @ 0x18004D8E8 (_lambda_7c0a109b94560954c032f9b3e66b1213_--operator().c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?_Rotate@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K0@Z @ 0x18004E1F8 (-_Rotate@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 *     ?_SetCapacity@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K@Z @ 0x18004E2A8 (-_SetCapacity@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allo.c)
 */

_QWORD *__fastcall utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_InsertMany<utl::_DlistIt<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>> &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD **a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r8
  _QWORD *v9; // rax
  __int64 v11; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx

  v5 = a1[1];
  v7 = *a1;
  *a2 = 0LL;
  v9 = *a4;
  v11 = (a3 - v7) >> 3;
  v13 = (v5 - v7) >> 3;
  v14 = 0LL;
  while ( v9 != (_QWORD *)*a5 )
  {
    v9 = (_QWORD *)*v9;
    ++v14;
  }
  v15 = v14 + v13 + 1;
  if ( v14 )
  {
    if ( v15 > v14 )
    {
      v16 = (a1[2] - v7) >> 3;
      if ( v15 <= v16 )
        goto LABEL_14;
      v17 = 7 * (v16 >> 2) + 8;
      if ( v17 < v15 )
        v17 = v15;
      if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        v17 = 0xFFFFFFFFFFFFFFFLL;
      if ( v15 <= v17
        && (unsigned __int8)utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_SetCapacity(
                              a1,
                              v17) )
      {
LABEL_14:
        while ( *a4 != (_QWORD *)*a5 )
        {
          ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
            (_QWORD *)a1[1],
            (*a4)[2]);
          a1[1] += 8LL;
          *a4 = (_QWORD *)**a4;
        }
        if ( (unsigned __int8)utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Rotate(
                                a1,
                                v11,
                                v13) )
        {
          *a2 = *a1 + 8 * v11;
        }
        else
        {
          while ( (a1[1] - *a1) >> 3 != v13 )
          {
            a1[1] -= 8LL;
            ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
              (ExecutionModel::ResourceSetImpl **)a1[1],
              v18);
          }
        }
      }
    }
  }
  else
  {
    *a2 = v7 + 8 * v11;
  }
  return a2;
}
