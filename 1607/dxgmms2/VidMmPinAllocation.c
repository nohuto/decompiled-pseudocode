/*
 * XREFs of VidMmPinAllocation @ 0x1C0012A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmPinAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  return VIDMM_GLOBAL::PinAllocation(a1, a2, a3, a4);
}
