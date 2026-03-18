/*
 * XREFs of ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C006AFA4
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C0067C4C (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmFindAlignedRange(ULONG_PTR *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR ParentValue; // r8
  struct _RTL_BALANCED_NODE *v3; // r9
  ULONG_PTR v4; // r10
  struct _RTL_BALANCED_NODE *v5; // rcx

  ParentValue = a2[1].ParentValue;
  v3 = a2[1].Children[1];
  v4 = *a1;
  if ( ParentValue - (unsigned __int64)v3 < *a1 )
    return 0xFFFFFFFFLL;
  v5 = (struct _RTL_BALANCED_NODE *)(~(a1[1] - 1) & ((unsigned __int64)v3 + a1[1] - 1));
  if ( v5 < v3 || (unsigned __int64)v5 >= ParentValue || ParentValue - (unsigned __int64)v5 < v4 )
    return 0xFFFFFFFFLL;
  a2[2].Children[0] = v5;
  return 0LL;
}
