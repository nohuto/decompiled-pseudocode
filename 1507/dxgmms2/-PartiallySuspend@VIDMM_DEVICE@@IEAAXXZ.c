/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058E38
 * Callers:
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0057A94 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0058A14 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 * Callees:
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0058C9C (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00596E0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00623CC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
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
