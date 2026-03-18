/*
 * XREFs of ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C0097DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::FreeScratchRange(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_LINEAR_POOL::Free(this[18], a2, a3, a4);
}
