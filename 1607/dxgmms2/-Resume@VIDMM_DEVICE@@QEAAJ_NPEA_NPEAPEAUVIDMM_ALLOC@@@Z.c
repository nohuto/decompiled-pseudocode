/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B9A0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FA58 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004EF0C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0059DA8 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005C074 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005C0A4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0069CC4 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C006AA24 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, _BOOL8 a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  bool v6; // r14
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  bool v19; // zf
  _QWORD *v20; // rax
  __int64 v22; // rbx
  VIDMM_COMMIT_TELEMETRY *v23; // rcx
  __int64 v24; // rax
  _BYTE v25[32]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = *((_DWORD *)this + 13) & 7;
  }
  *((_BYTE *)this + 50) |= 2u;
  v9 = 0;
  v10 = *((_QWORD *)this + 4);
  if ( v10 && (*(_BYTE *)(v10 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0))
    || (v9 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, v6, a3, a4), v9 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this, 0);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      **((struct _EPROCESS ***)this + 1),
      this,
      1);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
      (struct _KTHREAD **)(*(_QWORD *)this + 41520LL));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)this + 11);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= 0xEDu;
    *((_QWORD *)this + 29) = 0LL;
    v18 = *((_QWORD *)this + 28) + v13 * TimeIncrement;
    v19 = (*((_BYTE *)this + 50) & 4) == 0;
    *((_QWORD *)this + 27) = v18;
    *((_QWORD *)this + 28) = 0LL;
    if ( !v19 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 41656LL);
      *((_BYTE *)this + 50) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v15, v16, v17);
      v20[3] = this;
      v18 = *((_DWORD *)this + 13) & 7;
      v20[5] = 0LL;
      v20[4] = v18;
    }
    if ( (*((_BYTE *)this + 52) & 7) == 3 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v18 + 290) )
      {
        v22 = **(_QWORD **)this + 184LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v22, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v23, this, 0);
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_QWORD *)v22 = 0LL;
        *(_BYTE *)(v22 + 24) = 0;
      }
    }
    *((_DWORD *)this + 13) &= 0xFFFFFFF8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_p(v18, &EventVidMmResumeDevice, v16, *((_QWORD *)this + 3));
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v11);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdWarning(v24);
    *((_BYTE *)this + 50) &= ~2u;
  }
  return (unsigned int)v9;
}
