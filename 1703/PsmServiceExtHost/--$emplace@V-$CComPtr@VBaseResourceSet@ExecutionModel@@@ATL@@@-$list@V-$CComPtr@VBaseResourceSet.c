/*
 * XREFs of ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800350C8
 * Callers:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180011DB0 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x180029338 (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 */

_QWORD *__fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ATL::CComPtr<ExecutionModel::BaseResourceSet>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        ExecutionModel::BaseResourceSet **a4)
{
  ExecutionModel::BaseResourceSet **v8; // rax
  __int64 v9; // rcx
  char v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  void *Block[3]; // [rsp+20h] [rbp-18h] BYREF

  Block[1] = (void *)1;
  v8 = (ExecutionModel::BaseResourceSet **)operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18003CFF2);
  Block[0] = v8;
  if ( v8 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v8 + 2, *a4);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  v11 = (_QWORD *)utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                    v9,
                    (__int64 *)Block,
                    v10);
  *a2 = 0LL;
  if ( v11 )
  {
    v12 = *(_QWORD **)(a3 + 8);
    v11[1] = v12;
    *v11 = a3;
    *a2 = v11;
    *v12 = v11;
    *(_QWORD *)(a3 + 8) = v11;
    ++*(_QWORD *)(a1 + 16);
  }
  if ( Block[0] )
    operator delete(Block[0]);
  return a2;
}
