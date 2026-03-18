/*
 * XREFs of ?VidMmUnmapCpuVA@@YAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0003E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmUnmapCpuVA(struct VIDMM_PROCESS *a1, struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_GLOBAL::UnmapCpuVA(a1, a2);
}
