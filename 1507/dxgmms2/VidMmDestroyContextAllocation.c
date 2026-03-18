/*
 * XREFs of VidMmDestroyContextAllocation @ 0x1C000E620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmDestroyContextAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_CONTEXT_ALLOC *a2)
{
  return VIDMM_GLOBAL::DestroyContextAllocation(a1, a2);
}
