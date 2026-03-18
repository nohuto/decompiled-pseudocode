/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063D40
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00104CC (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C001E3E4 (Template_ppq.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004CAB0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004E5D0 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00671B4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v6; // r14
  char v7; // bp
  __int64 v10; // rax
  VIDMM_GLOBAL *v11; // rcx
  struct _VIDMM_LOCAL_ALLOC *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned int PriorityClass; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // r11
  __int64 v29; // rdx
  char *v30; // r10
  VIDMM_GLOBAL *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  VIDMM_GLOBAL *v36; // rax
  _QWORD *v37; // rax
  VIDMM_GLOBAL *v38; // r9
  signed __int32 v39[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v37[3] = 270LL;
    v37[4] = 9LL;
    v37[5] = 0LL;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v12 = a6;
  if ( !a6 )
    v12 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  if ( *((_DWORD *)this[1] + 10022) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v11, a2);
    if ( v7 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    if ( v6 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v13, v14, v15);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[1], a2, 1);
  v19 = (_DWORD *)*((_QWORD *)a2 + 63);
  v20 = (*v19 >> 27) & 1;
  if ( ((*v19 >> 27) & 1) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v20 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
        *((_QWORD *)a2 + 47) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v12);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
    }
  }
  if ( *((_QWORD *)a2 + 19) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v17, v18);
      v21[3] = *((_QWORD *)a2 + 19);
      v21[4] = *((int *)a2 + 37);
      v21[5] = *((unsigned int *)a2 + 36);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))*this + 3))(
      this,
      a2,
      *((_QWORD *)a2 + 19),
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v20, v16, v17, v18);
  }
  v22 = (_QWORD *)((char *)a2 + 400);
  v23 = *((_QWORD *)a2 + 50);
  v24 = (_QWORD *)*((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v23 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (_QWORD *)*v24 != v22 )
  {
    __fastfail(3u);
  }
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  *v22 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v12 && *((_QWORD *)v12 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v12, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 98), v23, v17, v18);
  v28 = (char *)a2 + 296;
  v29 = PriorityClass;
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v30 = (char *)*((_QWORD *)a2 + 37);
  while ( v30 != v28 )
  {
    v31 = this[1];
    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 - 6) + 16LL) + 8LL * *(unsigned int *)(*((_QWORD *)v31 + 3) + 200LL));
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v33 = 0LL;
    VidMmRecordEviction((__int64)v31 + 7128, v33 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v31 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 57) = *((_QWORD *)this[1] + 576);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v29, v26, v27);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v38 = this[1];
    LODWORD(v40) = *((_DWORD *)this + 4) + 1;
    Template_ppq(v34, &EventPagingOpSysmemUncommit, v35, *((_QWORD *)v38 + 3), a2, v40);
  }
  v36 = this[1];
  _InterlockedOr(v39, 0);
  ++*((_QWORD *)v36 + 5);
}
