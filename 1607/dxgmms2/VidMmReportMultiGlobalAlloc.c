/*
 * XREFs of VidMmReportMultiGlobalAlloc @ 0x1C00925F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmReportMultiGlobalAlloc(struct DXGDEVICE *a1, __int64 a2, struct DXGSHAREDRESOURCE *a3)
{
  VidMmReportGlobalAlloc(a1, *(struct _VIDMM_GLOBAL_ALLOC **)(a2 + 8), a3);
}
