/*
 * XREFs of ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00691AC
 * Callers:
 *     VidMmUnpinAllocation @ 0x1C0012A60 (VidMmUnpinAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::UnpinAllocation(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinOneAllocation(this, (__int64)a2, 3LL, 0LL);
}
