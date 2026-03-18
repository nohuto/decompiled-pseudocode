/*
 * XREFs of ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C0057ED4
 * Callers:
 *     VidMmSuspendWorkerThread @ 0x1C000E870 (VidMmSuspendWorkerThread.c)
 * Callees:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C0038C68 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendWorkerThread(__int64 *a1, int a2)
{
  int v2; // edx

  if ( a2 )
  {
    if ( a2 != 1 )
      return;
    v2 = 4;
  }
  else
  {
    v2 = 3;
  }
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*a1, v2);
}
