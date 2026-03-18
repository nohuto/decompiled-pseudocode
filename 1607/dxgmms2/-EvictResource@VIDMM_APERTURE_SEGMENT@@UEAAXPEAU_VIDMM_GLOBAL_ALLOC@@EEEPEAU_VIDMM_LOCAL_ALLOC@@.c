/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0096360
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00104CC (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004CAB0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004E5D0 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C005D0C8 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00671B4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0098FEC (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v6; // r15
  char v7; // bl
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  struct _VIDMM_LOCAL_ALLOC *v13; // rbp
  VIDMM_GLOBAL *v14; // rcx
  VIDMM_GLOBAL *v15; // rdi
  __int64 v16; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned int PriorityClass; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // r11
  char *v34; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v36; // r9
  void *v37; // rdx
  __int64 v38; // rax
  signed __int32 v39[8]; // [rsp+0h] [rbp-58h] BYREF

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
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v11[3] = 270LL;
    v11[4] = 9LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v13 = a6;
  if ( !a6 )
    v13 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v14 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned int)v14 & 0x100000) != 0 )
    v7 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40088LL) )
  {
    if ( ((unsigned int)v14 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v14, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 63) + 2LL) & 1) != 0 )
      VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), (D3DGPU_VIRTUAL_ADDRESS *)a2, 0LL, v12);
    if ( v7 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(
        this,
        a2);
    if ( (*((_DWORD *)a2 + 19) & 0x400000) == 0 )
    {
      v15 = *(VIDMM_GLOBAL **)this;
      v16 = *((_QWORD *)a2 + 18) / 4096LL;
      FullMDL = VidMmGetFullMDL(a2, v13);
      (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))v15
       + 26))(
        this,
        a2,
        *((_QWORD *)a2 + 1) >> 12,
        v16,
        v16,
        FullMDL,
        0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( v6 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v18, v19, v20);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v14 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1);
  v24 = (_DWORD *)*((_QWORD *)a2 + 63);
  v25 = (*v24 >> 27) & 1;
  if ( ((*v24 >> 27) & 1) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v25
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
        *((_QWORD *)a2 + 47) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v13);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
    }
  }
  if ( *((_QWORD *)a2 + 19) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v21, v22, v23);
      v26[3] = *((_QWORD *)a2 + 19);
      v26[4] = *((int *)a2 + 37);
      v26[5] = *((unsigned int *)a2 + 36);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      *((_QWORD *)a2 + 19),
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v25, v21, v22, v23);
  }
  v27 = (_QWORD *)((char *)a2 + 400);
  v28 = *((_QWORD *)a2 + 50);
  v29 = (_QWORD *)*((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v28 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (_QWORD *)*v29 != v27 )
  {
    __fastfail(3u);
  }
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  *v27 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v13 && *((_QWORD *)v13 + 1) && (*((_DWORD *)a2 + 21) & 4) == 0 )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v13, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 98));
  v33 = (char *)a2 + 296;
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v34 = (char *)*((_QWORD *)a2 + 37);
  while ( v34 != v33 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v34 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 200LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v36 + 7128, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v36 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  v37 = (void *)*((_QWORD *)a2 + 48);
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( v37 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v37);
    *((_QWORD *)a2 + 48) = 0LL;
  }
  if ( !a5 )
  {
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
    {
      VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
      *((_DWORD *)a2 + 21) |= 0x10u;
      *((_QWORD *)a2 + 57) = *(_QWORD *)(*((_QWORD *)this + 1) + 4608LL);
    }
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), (__int64)v37, v31, v32);
  v38 = *((_QWORD *)this + 1);
  _InterlockedOr(v39, 0);
  ++*(_QWORD *)(v38 + 40);
}
