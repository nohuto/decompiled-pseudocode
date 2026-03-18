/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005936C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchSuspendResumeDevice @ 0x1C001D320 (VidSchSuspendResumeDevice.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053B6C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0059518 (-ResumePagingQueues@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00623CC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C0072D10 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  *((_BYTE *)this + 50) |= 1u;
  v5 = 0;
  v6 = *((_QWORD *)this + 4);
  if ( v6 && (*(_BYTE *)(v6 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0))
    || (v5 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v5 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    v11 = *((_QWORD *)this + 4);
    if ( v11 )
      VidSchSuspendResumeDevice(v11, 0, 0);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      **((struct _EPROCESS ***)this + 1),
      this,
      1u);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v21,
      (struct DXGPUSHLOCK *const)(*(_QWORD *)this + 41152LL));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)this + 168));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= ~1u;
    *((_QWORD *)this + 26) = 0LL;
    v16 = *((_QWORD *)this + 25) + v13 * TimeIncrement;
    v17 = (*((_BYTE *)this + 50) & 2) == 0;
    *((_QWORD *)this + 24) = v16;
    *((_QWORD *)this + 25) = 0LL;
    if ( !v17 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 41256LL);
      *((_BYTE *)this + 50) &= ~2u;
    }
    if ( (*((_BYTE *)this + 52) & 3) == 3 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v16 + 314) )
      {
        v18 = *(_QWORD *)this;
        v19 = **(_QWORD **)this + 152LL;
        if ( !*(_BYTE *)(**(_QWORD **)this + 176LL) )
        {
          *(_QWORD *)(**(_QWORD **)this + 160LL) = this;
          *(_QWORD *)(v19 + 16) = 0LL;
          *(_QWORD *)v19 = v18;
          *(_BYTE *)(v19 + 24) = 1;
        }
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent((VIDMM_COMMIT_TELEMETRY *)v19, this, 0);
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)v19 = 0LL;
        *(_BYTE *)(v19 + 24) = 0;
      }
    }
    *((_DWORD *)this + 13) &= 0xFFFFFFFC;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      Template_p(v16, &EventVidMmResumeDevice, v15, *((_QWORD *)this + 3));
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdWarning(v10);
    *((_BYTE *)this + 50) &= ~1u;
  }
  return (unsigned int)v5;
}
