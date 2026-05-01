/*
 * XREFs of ?push_front@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18003654C
 * Callers:
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::push_front(
        __int64 *a1,
        ExecutionModel::ResourceSet **a2)
{
  __int64 v2; // rbx
  void *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  __int64 result; // rax

  v2 = *a1;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18003D9B0);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
    (ExecutionModel::ResourceSet **)v5 + 2,
    *a2);
  v7 = *(_QWORD **)(v2 + 8);
  result = 1LL;
  v6[1] = v7;
  *v6 = v2;
  *v7 = v6;
  *(_QWORD *)(v2 + 8) = v6;
  ++a1[2];
  return result;
}
