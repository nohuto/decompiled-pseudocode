/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0061470
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0061300 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061630 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006164C (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0086CF0 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rbx
  _BYTE v20[40]; // [rsp+30h] [rbp-28h] BYREF

  *((_BYTE *)this + 50) |= 1u;
  v5 = 0;
  v6 = *((_QWORD *)this + 4);
  if ( v6 && (*(_BYTE *)(v6 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0))
    || (v5 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v5 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      **((struct _EPROCESS ***)this + 1),
      this,
      1);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v20,
      (struct _KTHREAD **)(*(_QWORD *)this + 41208LL),
      v9,
      v10);
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v11, (struct _LIST_ENTRY *)((char *)this + 168));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    v12 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= ~1u;
    *((_QWORD *)this + 26) = 0LL;
    v15 = *((_QWORD *)this + 25) + v12 * TimeIncrement;
    v16 = (*((_BYTE *)this + 50) & 2) == 0;
    *((_QWORD *)this + 24) = v15;
    *((_QWORD *)this + 25) = 0LL;
    if ( !v16 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 41312LL);
      *((_BYTE *)this + 50) &= ~2u;
    }
    if ( (*((_BYTE *)this + 52) & 3) == 3 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v15 + 314) )
      {
        v17 = *(_QWORD *)this;
        v18 = **(_QWORD **)this + 152LL;
        if ( !*(_BYTE *)(**(_QWORD **)this + 176LL) )
        {
          *(_QWORD *)(**(_QWORD **)this + 160LL) = this;
          *(_QWORD *)(v18 + 16) = 0LL;
          *(_QWORD *)v18 = v17;
          *(_BYTE *)(v18 + 24) = 1;
        }
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent((VIDMM_COMMIT_TELEMETRY *)v18, this, 0);
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)v18 = 0LL;
        *(_BYTE *)(v18 + 24) = 0;
      }
    }
    *((_DWORD *)this + 13) &= 0xFFFFFFFC;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_p(v15, &EventVidMmResumeDevice, v14, *((_QWORD *)this + 3));
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v7);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdWarning(v8);
    *((_BYTE *)this + 50) &= ~1u;
  }
  return (unsigned int)v5;
}
