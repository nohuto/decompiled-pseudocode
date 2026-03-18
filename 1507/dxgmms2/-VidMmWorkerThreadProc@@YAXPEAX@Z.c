/*
 * XREFs of ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0038C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmWorkerThreadProc(VIDMM_WORKER_THREAD *StartContext)
{
  VIDMM_WORKER_THREAD::Run(StartContext);
}
