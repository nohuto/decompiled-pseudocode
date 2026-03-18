/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C008D9A4
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C001D720 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 144LL) != 0;
}
