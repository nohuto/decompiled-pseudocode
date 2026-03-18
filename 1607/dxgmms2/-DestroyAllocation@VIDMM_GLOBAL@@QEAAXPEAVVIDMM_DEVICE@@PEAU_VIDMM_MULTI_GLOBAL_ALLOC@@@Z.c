/*
 * XREFs of ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00575B8
 * Callers:
 *     VidMmDestroyAllocation @ 0x1C0011270 (VidMmDestroyAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::DestroyAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  VIDMM_GLOBAL::DestroyOneAllocation(this, a2, a3, 0LL);
}
