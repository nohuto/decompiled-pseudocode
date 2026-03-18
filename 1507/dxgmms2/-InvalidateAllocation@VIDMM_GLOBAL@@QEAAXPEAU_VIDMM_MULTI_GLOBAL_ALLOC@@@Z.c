/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C004E6E0
 * Callers:
 *     VidMmInvalidateAllocation @ 0x1C000E6D0 (VidMmInvalidateAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2);
}
