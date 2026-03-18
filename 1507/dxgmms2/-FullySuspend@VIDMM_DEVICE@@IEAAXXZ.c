/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058B5C
 * Callers:
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C0057B58 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0058C9C (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059608 (-SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00596E0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00623CC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0072D10 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
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
  *((_QWORD *)this + 25) = qword_1C0027370;
  VIDMM_DEVICE::MoveToPenaltyBoxBand(this, 3LL);
  v2 = MEMORY[0xFFFFF78000000320];
  v3 = qword_1C0027360 + v2 * KeQueryTimeIncrement();
  *((_QWORD *)this + 23) = v3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
  {
    v5 = 3;
    Template_pq(v3, &EventVidMmSuspendDevice, v4, *((_QWORD *)this + 3), v5);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 314LL) )
    VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent((VIDMM_COMMIT_TELEMETRY *)(**(_QWORD **)this + 152LL), this, 1);
}
