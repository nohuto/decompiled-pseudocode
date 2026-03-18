/*
 * XREFs of sub_1C0124C00 @ 0x1C0124C00
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0124C00(struct OUTPUTDUPL_MGR_INDIRECT *a1, __int64 (__fastcall **a2)(_QWORD, _QWORD))
{
  if ( *a2 == *((__int64 (__fastcall **)(_QWORD, _QWORD))a1 + 13) )
    return ((__int64 (__fastcall **)(char *, _QWORD))a2)[1]((char *)a1 + 24, a2[2]);
  else
    return 0LL;
}
