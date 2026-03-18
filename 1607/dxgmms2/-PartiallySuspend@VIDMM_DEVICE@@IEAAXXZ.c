/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0069218
 * Callers:
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0068CB4 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0088DA0 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0090C14 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 * Callees:
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0059DA8 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00691B8 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(__int64 **this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // [rsp+20h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct _EPROCESS *)*this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v2 = *((_DWORD *)this + 13) & 7;
  VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this, 0, -1);
  v3 = MEMORY[0xFFFFF78000000320];
  this[28] = (__int64 *)((char *)this[27] - v3 * KeQueryTimeIncrement());
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 1u, v4, v5);
  v9 = **this;
  v10 = *(_QWORD *)(v9 + 16);
  if ( v10 && (*(_DWORD *)(v10 + 52) & 7) != 0 )
    *((_BYTE *)this + 50) |= 0x10u;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v6, v7, v8);
    v9 = v2;
    v11[3] = this;
    v11[4] = v2;
    v11[5] = 1LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    v12 = 1;
    Template_pq(v9, &EventVidMmSuspendDevice, v7, this[3], v12);
  }
}
