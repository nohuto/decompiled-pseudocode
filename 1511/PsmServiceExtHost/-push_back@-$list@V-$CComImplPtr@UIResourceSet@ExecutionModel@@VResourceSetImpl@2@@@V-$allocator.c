/*
 * XREFs of ?push_back@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA_N$$QEAV?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@Z @ 0x180036864
 * Callers:
 *     ?SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180036190 (-SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18003676C (-SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z @ 0x18003DB10 (-ReclaimMemory@ResourceManager@ExecutionModel@@UEAAJPEAUIReclaimMemoryCallback@2@@Z.c)
 *     ?UndoSetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18003E894 (-UndoSetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::push_back(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 result; // rax

  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    v4 + 2,
    *a2);
  v6 = *(_QWORD **)(a1 + 8);
  result = 1LL;
  v5[1] = v6;
  *v5 = a1;
  *v6 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
