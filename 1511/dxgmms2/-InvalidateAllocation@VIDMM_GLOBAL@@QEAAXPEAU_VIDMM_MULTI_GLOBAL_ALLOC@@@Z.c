/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006979C
 * Callers:
 *     VidMmInvalidateAllocation @ 0x1C0014FB0 (VidMmInvalidateAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, union _LARGE_INTEGER **a2)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2);
}
