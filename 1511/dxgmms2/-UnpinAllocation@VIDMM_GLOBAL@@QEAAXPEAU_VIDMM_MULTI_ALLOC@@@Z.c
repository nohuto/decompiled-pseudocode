/*
 * XREFs of ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00612F4
 * Callers:
 *     VidMmUnpinAllocation @ 0x1C0014D60 (VidMmUnpinAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::UnpinAllocation(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinOneAllocation(this, a2, 3LL, 0);
}
