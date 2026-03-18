/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0057A84
 * Callers:
 *     VidMmResumeWorkerThread @ 0x1C000E830 (VidMmResumeWorkerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this)
{
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*(_QWORD *)this, 1);
}
