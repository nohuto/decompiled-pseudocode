/*
 * XREFs of VidMmGetTotalSegmentSize @ 0x1C00144F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmGetTotalSegmentSize(
        VIDMM_GLOBAL *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  VIDMM_GLOBAL::GetTotalSegmentSize(a1, a2, a3, a4);
}
