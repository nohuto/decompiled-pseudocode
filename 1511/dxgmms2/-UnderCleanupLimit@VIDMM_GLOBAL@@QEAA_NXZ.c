/*
 * XREFs of ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0043318
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C0055828 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VIDMM_GLOBAL::UnderCleanupLimit(VIDMM_GLOBAL *this)
{
  return *((_QWORD *)this + 884) < (unsigned __int64)qword_1C002F2E8
      && *((_DWORD *)this + 1770) < (unsigned int)dword_1C002F2F0;
}
