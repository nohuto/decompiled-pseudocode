/*
 * XREFs of ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0046E90
 * Callers:
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C00479B4 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CompareVadSizeGreaterOrEqualAvl(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  return *a1 > (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
}
