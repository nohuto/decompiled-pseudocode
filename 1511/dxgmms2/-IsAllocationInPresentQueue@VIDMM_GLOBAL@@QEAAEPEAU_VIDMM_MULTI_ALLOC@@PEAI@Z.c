/*
 * XREFs of ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0038144
 * Callers:
 *     VidMmIsAllocationInPresentQueue @ 0x1C001C6C0 (VidMmIsAllocationInPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C005F700 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  bool v3; // r9
  __int64 v4; // rcx

  v3 = 1;
  if ( *((int *)a2 + 26) <= 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 16LL);
    if ( *(int *)(v4 + 8) <= 0 )
      v3 = *(_DWORD *)(v4 + 12) > 0;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(**(_QWORD **)a2 + 156LL);
  return v3;
}
