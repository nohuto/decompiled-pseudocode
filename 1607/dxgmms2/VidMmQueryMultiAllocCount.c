/*
 * XREFs of VidMmQueryMultiAllocCount @ 0x1C0015090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmQueryMultiAllocCount(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryMultiAllocCount(a1, a2);
}
