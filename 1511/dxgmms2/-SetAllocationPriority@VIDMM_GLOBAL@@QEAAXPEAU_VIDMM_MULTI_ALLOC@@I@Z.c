/*
 * XREFs of ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007BEFC
 * Callers:
 *     VidMmSetAllocationPriority @ 0x1C001C780 (VidMmSetAllocationPriority.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::SetAllocationPriority(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetOneAllocationPriority(this, a2, a3);
}
