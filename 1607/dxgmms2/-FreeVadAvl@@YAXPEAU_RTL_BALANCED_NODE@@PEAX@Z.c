/*
 * XREFs of ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0067848
 * Callers:
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0048224 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall FreeVadAvl(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  CVirtualAddressAllocator::FreeVad((struct VIDMM_VAD *)a1);
}
