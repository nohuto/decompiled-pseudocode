/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C
 * Callers:
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007AA08 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C007F188 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C007F8C4 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 * Callees:
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0061300 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061614 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00616F0 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(VIDMM_DEVICE *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // [rsp+20h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    *(VIDMM_GLOBAL **)this,
    **((struct _EPROCESS ***)this + 1),
    this,
    0);
  VIDMM_DEVICE::SuspendSchedulerDevice(this);
  v2 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this + 25) = *((_QWORD *)this + 24) - v2 * KeQueryTimeIncrement();
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 1);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
  {
    v5 = 1;
    Template_pq(v3, &EventVidMmSuspendDevice, v4, *((_QWORD *)this + 3), v5);
  }
}
