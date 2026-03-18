/*
 * XREFs of ?VidMmSuspendResumeDevice@@YAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x1C0011CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmSuspendResumeDevice(struct VIDMM_DEVICE *a1, bool a2, bool a3)
{
  VIDMM_DEVICE::SuspendResume(a1, a2, a3);
}
