/*
 * XREFs of _lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_ @ 0x1C011F110
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_(
        struct OUTPUTDUPL_MGR_INDIRECT *a1,
        __int64 (__fastcall **a2)(_QWORD, _QWORD))
{
  if ( *a2 == *((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 13) )
    return ((__int64 (__fastcall **)(char *, _QWORD))a2)[1]((char *)a1 + 24, a2[2]);
  else
    return 0LL;
}
