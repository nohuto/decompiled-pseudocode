/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0090D74
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     Template_ppq @ 0x1C001E3E4 (Template_ppq.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BF94 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00691B8 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax

  v5 = *((_DWORD *)this + 13) & 7;
  *((_QWORD *)this + 29) = a2;
  if ( v5 != 2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this, 0, -1);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v7 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 28) = *((_QWORD *)this + 27) - v7 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2u, a3, a4);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_pq(v8, &EventVidMmSuspendDevice, a3, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this, (__int64)a2, a3, a4);
  v13 = *((_QWORD *)a2 + 27);
  *((_QWORD *)this + 26) = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = this;
    v14[4] = *((_QWORD *)this + 29);
    v10 = v5;
    v14[5] = v5;
    v14[6] = 3LL;
    v14[7] = v13;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppq(
      v10,
      &EventVidMmYieldDevice,
      v11,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v13 - *(_DWORD *)(*(_QWORD *)this + 4608LL));
}
