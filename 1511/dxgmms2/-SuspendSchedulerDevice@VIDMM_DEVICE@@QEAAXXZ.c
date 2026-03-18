/*
 * XREFs of ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061614
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C007FBBC (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_DEVICE::SuspendSchedulerDevice(VIDMM_DEVICE *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    VidSchSuspendResumeDevice(v1, 1, 0);
}
