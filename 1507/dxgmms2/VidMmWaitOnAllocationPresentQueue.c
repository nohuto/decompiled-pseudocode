/*
 * XREFs of VidMmWaitOnAllocationPresentQueue @ 0x1C000E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmWaitOnAllocationPresentQueue(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  return VIDMM_GLOBAL::WaitOnAllocationPresentQueue(a1, a2, a3);
}
