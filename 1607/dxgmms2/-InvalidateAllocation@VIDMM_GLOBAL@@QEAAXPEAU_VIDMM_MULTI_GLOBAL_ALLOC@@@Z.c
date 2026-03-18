/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006F038
 * Callers:
 *     VidMmInvalidateAllocation @ 0x1C0012DD0 (VidMmInvalidateAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2, __int64 a3, __int64 a4)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2, a3, a4);
}
