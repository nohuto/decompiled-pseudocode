/*
 * XREFs of ?WorkerHasQueuedPaging@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0056EB0
 * Callers:
 *     VidMmWorkerHasQueuedPaging @ 0x1C000E940 (VidMmWorkerHasQueuedPaging.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VIDMM_GLOBAL::WorkerHasQueuedPaging(VIDMM_GLOBAL *this)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)this;
  return *(_QWORD *)(*(_QWORD *)this + 40LL) != *(_QWORD *)this + 40LL
      || (_QWORD *)v1[7] != v1 + 7
      || (_QWORD *)v1[9] != v1 + 9
      || (_QWORD *)v1[11] != v1 + 11;
}
