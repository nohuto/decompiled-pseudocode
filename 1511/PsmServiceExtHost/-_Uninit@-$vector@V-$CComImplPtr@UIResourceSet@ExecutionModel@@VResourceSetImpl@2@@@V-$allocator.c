/*
 * XREFs of ?_Uninit@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAAXXZ @ 0x18004E38C
 * Callers:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 *     ?_SetCapacity@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAA_N_K@Z @ 0x18004E2A8 (-_SetCapacity@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allo.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Uninit(
        __int64 a1,
        unsigned int a2)
{
  if ( *(_QWORD *)a1 )
  {
    for ( ; *(_QWORD *)a1 != *(_QWORD *)(a1 + 8); *(_QWORD *)(a1 + 8) -= 8LL )
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
        (ExecutionModel::ResourceSetImpl **)(*(_QWORD *)(a1 + 8) - 8LL),
        a2);
    operator delete(*(void **)a1);
  }
}
