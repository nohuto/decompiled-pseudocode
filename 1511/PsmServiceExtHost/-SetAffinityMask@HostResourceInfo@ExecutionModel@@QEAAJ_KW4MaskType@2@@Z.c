/*
 * XREFs of ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0
 * Callers:
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x180013544 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActi.c)
 *     Srv_ResourcePolicy_RevertProcessAffinityMask @ 0x18004C100 (Srv_ResourcePolicy_RevertProcessAffinityMask.c)
 *     _lambda_ccc37a58cf1517856bda7396a9053bcf_::_helper_func_cdecl_ @ 0x18004C9CC (_lambda_ccc37a58cf1517856bda7396a9053bcf_--_helper_func_cdecl_.c)
 *     ?SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z @ 0x18004D02C (-SetProcessAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0@Z.c)
 * Callees:
 *     _lambda_7c0a109b94560954c032f9b3e66b1213_::operator() @ 0x18004D8E8 (_lambda_7c0a109b94560954c032f9b3e66b1213_--operator().c)
 *     ?ApplyResourceLimits@ExecutionModel@@YAJAEAV?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@_K1@Z @ 0x18004D964 (-ApplyResourceLimits@ExecutionModel@@YAJAEAV-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel.c)
 *     ?_Uninit@?$vector@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@AEAAXXZ @ 0x18004E38C (-_Uninit@-$vector@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::SetAffinityMask(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = 0;
  if ( a2 != *(_QWORD *)(a1 + 168) )
  {
    v10 = 0LL;
    v9 = 0LL;
    v3 = lambda_7c0a109b94560954c032f9b3e66b1213_::operator()(a1, &v9, a1 + 88);
    if ( v3 < 0
      || (v3 = lambda_7c0a109b94560954c032f9b3e66b1213_::operator()(v8, &v9, a1 + 112), v3 < 0)
      || (v3 = ExecutionModel::ApplyResourceLimits(&v9, a2, *(_QWORD *)(a1 + 168)), v3 < 0) )
    {
      utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Uninit(&v9);
      return (unsigned int)v3;
    }
    utl::vector<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::_Uninit(&v9);
  }
  *(_QWORD *)(a1 + 168) = a2;
  *(_DWORD *)(a1 + 176) = a3;
  return (unsigned int)v3;
}
