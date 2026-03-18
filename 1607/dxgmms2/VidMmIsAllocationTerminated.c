/*
 * XREFs of VidMmIsAllocationTerminated @ 0x1C001D580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int8 __fastcall VidMmIsAllocationTerminated(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationTerminated(a1, a2);
}
