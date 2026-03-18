/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4
 * Callers:
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C007F0DC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C007F188 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0061300 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061614 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00616F0 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007FAE4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0086CF0 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::FullySuspend(VIDMM_DEVICE *this)
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
  if ( (*((_DWORD *)this + 13) & 3) == 0 )
    VIDMM_DEVICE::SuspendSchedulerDevice(this);
  VIDMM_DEVICE::SuspendPagingQueues(this);
  *((_QWORD *)this + 25) = qword_1C002F398;
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 3);
  v2 = MEMORY[0xFFFFF78000000320];
  v3 = qword_1C002F388 + v2 * KeQueryTimeIncrement();
  *((_QWORD *)this + 23) = v3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
  {
    v5 = 3;
    Template_pq(v3, &EventVidMmSuspendDevice, v4, *((_QWORD *)this + 3), v5);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 314LL) )
    VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent((VIDMM_COMMIT_TELEMETRY *)(**(_QWORD **)this + 152LL), this, 1);
}
