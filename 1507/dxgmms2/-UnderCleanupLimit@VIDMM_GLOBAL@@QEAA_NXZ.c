/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00331E8
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C006F9DC (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  return *((_QWORD *)this + 884) < (unsigned __int64)qword_1C00272C8
      && *((_DWORD *)this + 1770) < (unsigned int)dword_1C00272D0;
}
