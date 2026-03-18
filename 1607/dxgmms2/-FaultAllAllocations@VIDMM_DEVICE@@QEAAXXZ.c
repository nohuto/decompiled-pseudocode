/*
 * XREFs of ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0088DA0 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C0090328 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0090D74 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD **v6; // r14
  _QWORD *v7; // rsi
  VIDMM_DEVICE **v8; // rdx

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_DWORD *)this + 14) )
  {
    do
    {
      v6 = (_QWORD **)(*((_QWORD *)this + 5) + 56LL * v4 + 32);
      v7 = *v6;
      while ( v7 != v6 )
      {
        v8 = (VIDMM_DEVICE **)(v7 - 7);
        v7 = (_QWORD *)*v7;
        if ( (*(_DWORD *)(*(_QWORD *)*v8 + 76LL) & 0x100) == 0 )
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v8);
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 14) );
  }
}
