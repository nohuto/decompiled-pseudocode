/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004FB3C
 * Callers:
 *     VidMmResumeWorkerThread @ 0x1C00145E0 (VidMmResumeWorkerThread.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this)
{
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*(_QWORD *)this, 1);
}
