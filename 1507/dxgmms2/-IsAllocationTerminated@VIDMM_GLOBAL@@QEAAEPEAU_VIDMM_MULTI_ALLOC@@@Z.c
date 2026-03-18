/*
 * XREFs of ?IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C004E820
 * Callers:
 *     VidMmIsAllocationTerminated @ 0x1C000E6F0 (VidMmIsAllocationTerminated.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004E848 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationTerminated(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  return (*((_DWORD *)a2 + 7) & 4) != 0
      && !VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2, 0);
}
