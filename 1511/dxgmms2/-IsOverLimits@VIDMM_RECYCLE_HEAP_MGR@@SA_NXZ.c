/*
 * XREFs of ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0011F5C
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C005A580 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005A6C0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 VIDMM_RECYCLE_HEAP_MGR::IsOverLimits(void)
{
  return VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C002F348 << 20)
      || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C002F34C << 20);
}
