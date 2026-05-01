/*
 * XREFs of ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180036954
 * Callers:
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800414E8 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??$_NewNodeCommit@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@AEAV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@_N@Z @ 0x18000F16C (--$_NewNodeCommit@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Cont.c)
 *     ??$_NewNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAA?AV?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@1@XZ @ 0x18000F198 (--$_NewNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_ContainerB.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ATL::CComPtr<ExecutionModel::BaseResourceSet>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  void *v7; // rcx
  char v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  void *Block[3]; // [rsp+20h] [rbp-18h] BYREF

  utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
    a1,
    Block);
  v7 = Block[0];
  if ( Block[0] )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      (_QWORD *)Block[0] + 2,
      *a4);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = (_QWORD *)utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_NewNodeCommit<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                   (__int64)v7,
                   (__int64 *)Block,
                   v8);
  *a2 = 0LL;
  if ( v9 )
  {
    *a2 = v9;
    v10 = *(_QWORD **)(a3 + 8);
    v9[1] = v10;
    *v9 = a3;
    *v10 = v9;
    *(_QWORD *)(a3 + 8) = v9;
    ++*(_QWORD *)(a1 + 16);
  }
  if ( Block[0] )
    operator delete(Block[0]);
  return a2;
}
