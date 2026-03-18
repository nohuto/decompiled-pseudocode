/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0059930
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     Template_ppq @ 0x1C000F64C (Template_ppq.c)
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00589A0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0058C9C (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059608 (-SuspendPagingQueues@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00596E0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]

  v3 = *((_DWORD *)this + 13) & 3;
  *((_QWORD *)this + 26) = a2;
  if ( v3 != 2 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v5 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 25) = *((_QWORD *)this + 24) - v5 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
    {
      v11 = 2;
      Template_pq(v6, &EventVidMmSuspendDevice, v7, *((_QWORD *)this + 3), v11);
    }
  }
  VIDMM_DEVICE::FaultAllAllocations(this);
  v9 = *((_QWORD *)a2 + 24);
  *((_QWORD *)this + 23) = v9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
  {
    v10 = (unsigned int)(v9 - *(_DWORD *)(*(_QWORD *)this + 4608LL));
    v12 = v10;
    Template_ppq(v10, &EventVidMmYieldDevice, v8, *((_QWORD *)this + 3), *((_QWORD *)a2 + 3), v12);
  }
}
