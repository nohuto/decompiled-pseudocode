/*
 * XREFs of ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00108DC
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00668E0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C006A7C0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 VIDMM_RECYCLE_HEAP_MGR::IsOverLimits(void)
{
  return VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C0027320 << 20)
      || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C0027324 << 20);
}
