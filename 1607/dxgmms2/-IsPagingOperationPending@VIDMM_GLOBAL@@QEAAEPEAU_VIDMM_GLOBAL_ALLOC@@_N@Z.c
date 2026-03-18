/*
 * XREFs of ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004FB68
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C004C6C8 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050A18 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 *     ?IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0089774 (-IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008C318 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C000FE58 (VidSchIsMonitoredFenceSignaled.c)
 */

bool __fastcall VIDMM_GLOBAL::IsPagingOperationPending(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rax

  if ( a3 )
    v4 = *((_QWORD *)a2 + 21);
  else
    v4 = *((_QWORD *)a2 + 22);
  v5 = *((_DWORD *)a2 + 19) & 0x3F;
  v6 = (unsigned int)v5;
  v7 = *((_QWORD *)this + v5 + 674);
  return (v7 <= v4 || v7 - v4 < 0x7FFFFFFF) && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v6 + 738), v4);
}
