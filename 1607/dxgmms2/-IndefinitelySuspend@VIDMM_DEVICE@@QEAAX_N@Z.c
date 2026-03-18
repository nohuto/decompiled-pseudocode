/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BD94
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C0090328 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0011B04 (VidSchDeviceQueuesNotEmpty.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0059DA8 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(__int64 **this, char a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  _QWORD *v15; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct _EPROCESS *)*this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v4 = 4;
  v5 = *((_DWORD *)this + 13) & 7;
  if ( !v5 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this, 0, 0xFFFFFFFF);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  v6 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 128, 0LL);
  *(_QWORD *)(v6 + 136) = KeGetCurrentThread();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)*this + 5190);
  if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16)) )
    v4 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v4, v7, v8);
  v9 = **this + 128;
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  v14 = (*((_BYTE *)this + 50) & 4) == 0;
  *((_BYTE *)this + 48) = a2;
  if ( !v14 )
  {
    --*((_DWORD *)*this + 10414);
    *((_BYTE *)this + 50) &= ~4u;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[4] = v5;
    v15[5] = v4;
    v15[3] = this;
    v11 = (__int64)this[26];
    v15[6] = v11;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_pq(v11, &EventVidMmSuspendDevice, v12, this[3], v4);
}
