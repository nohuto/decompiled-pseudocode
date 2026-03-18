/*
 * XREFs of VidMmReferenceAllocationForTokenSubmission @ 0x1C000E780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmReferenceAllocationForTokenSubmission(
        struct VIDMM_DEVICE *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3)
{
  return VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(a1, a1, a2, a3);
}
