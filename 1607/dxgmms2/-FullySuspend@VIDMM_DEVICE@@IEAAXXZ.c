/*
 * XREFs of ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006A894
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C0090328 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0011B04 (VidSchDeviceQueuesNotEmpty.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0059DA8 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C006AA24 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::FullySuspend(__int64 **this)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 TimeIncrement; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct _EPROCESS *)*this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v2 = 4;
  v3 = *((_DWORD *)this + 13) & 7;
  if ( !v3 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this, 0, -1);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  this[28] = (__int64 *)qword_1C00353A8;
  v4 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 128, 0LL);
  *(_QWORD *)(v4 + 136) = KeGetCurrentThread();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (struct _KTHREAD **)*this + 5190);
  if ( VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16) )
    v2 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v2, v5, v6);
  v7 = **this + 128;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  if ( (*((_BYTE *)this + 50) & 4) != 0 )
  {
    --*((_DWORD *)*this + 10414);
    *((_BYTE *)this + 50) &= ~4u;
  }
  v8 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v13 = qword_1C0035398 + TimeIncrement * v8;
  this[26] = (__int64 *)v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(TimeIncrement, v9, v11, v12);
    v14[4] = v3;
    TimeIncrement = v2;
    v14[5] = v2;
    v14[3] = this;
    v14[6] = v13;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_pq(TimeIncrement, &EventVidMmSuspendDevice, v11, this[3], v2);
  if ( *(_BYTE *)(this[3][5] + 290) )
    VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
      (VIDMM_COMMIT_TELEMETRY *)(**this + 184),
      (struct VIDMM_DEVICE *)this,
      1);
}
