/*
 * XREFs of _lambda_ccc37a58cf1517856bda7396a9053bcf_::_helper_func_cdecl_ @ 0x18004C9CC
 * Callers:
 *     ?SetGlobalAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K@Z @ 0x18004CFA4 (-SetGlobalAffinityMask@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K@Z.c)
 * Callees:
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 */

__int64 __fastcall lambda_ccc37a58cf1517856bda7396a9053bcf_::_helper_func_cdecl_(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)(a1 + 176) )
    return ExecutionModel::HostResourceInfo::SetAffinityMask(a1, *a2, 0);
  return result;
}
