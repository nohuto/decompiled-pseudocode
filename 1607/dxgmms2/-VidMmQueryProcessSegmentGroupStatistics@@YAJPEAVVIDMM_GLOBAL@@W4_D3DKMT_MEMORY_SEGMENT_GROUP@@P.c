/*
 * XREFs of ?VidMmQueryProcessSegmentGroupStatistics@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C001D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmQueryProcessSegmentGroupStatistics(
        struct VIDMM_GLOBAL *a1,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(a1, a2, a3, a4);
}
