/*
 * XREFs of VidMmResumeMemorySegmentAccess @ 0x1C000E820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmResumeMemorySegmentAccess(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::ResumeMemorySegmentAccess(a1);
}
