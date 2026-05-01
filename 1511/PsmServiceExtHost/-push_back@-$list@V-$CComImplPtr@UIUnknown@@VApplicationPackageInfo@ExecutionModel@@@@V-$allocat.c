/*
 * XREFs of ?push_back@?$list@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@QEAA_NAEBV?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@Z @ 0x180006300
 * Callers:
 *     ?CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A5EC (-CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAU.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::list<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::push_back(
        __int64 a1,
        _QWORD *a2)
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
