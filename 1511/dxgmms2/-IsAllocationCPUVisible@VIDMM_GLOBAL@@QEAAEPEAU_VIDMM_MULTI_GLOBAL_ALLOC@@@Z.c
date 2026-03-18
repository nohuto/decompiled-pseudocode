/*
 * XREFs of ?IsAllocationCPUVisible@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C006DE78
 * Callers:
 *     VidMmIsAllocationCPUVisible @ 0x1C0016E10 (VidMmIsAllocationCPUVisible.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::IsAllocationCPUVisible(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  return **((_DWORD **)a2 + 59) & 1;
}
