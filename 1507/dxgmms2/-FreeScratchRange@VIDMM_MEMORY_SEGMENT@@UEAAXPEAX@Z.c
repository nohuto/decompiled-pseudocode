/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C006F4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(VIDMM_LINEAR_POOL **this, struct _VIDMM_POOL_BLOCK *a2)
{
  VIDMM_LINEAR_POOL::Free(this[18], a2);
}
