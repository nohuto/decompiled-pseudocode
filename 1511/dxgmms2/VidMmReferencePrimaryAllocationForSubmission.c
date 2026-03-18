/*
 * XREFs of VidMmReferencePrimaryAllocationForSubmission @ 0x1C0011930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmReferencePrimaryAllocationForSubmission(
        struct VIDMM_DEVICE *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3)
{
  return VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(a1, a1, a2, a3);
}
