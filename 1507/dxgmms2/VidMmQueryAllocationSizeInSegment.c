/*
 * XREFs of VidMmQueryAllocationSizeInSegment @ 0x1C0008730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall VidMmQueryAllocationSizeInSegment(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSegment(a1, a2);
}
