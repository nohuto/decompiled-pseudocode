/*
 * XREFs of ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0068ED0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009ABD0 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009B268 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0051F48 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllReclaimedAllocation(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // r8

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  VIDMM_GLOBAL::EvictAllAllocationInList(this, (struct _LIST_ENTRY *)((char *)this + 3736), a3);
  VIDMM_GLOBAL::EvictAllAllocationInList(v5, (struct _LIST_ENTRY *)((char *)this + 3752), v6);
}
