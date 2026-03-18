/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00550F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00133C4 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0043D9C (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0046230 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004629C (-RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0049C34 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB60 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0052668 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C005F6BC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  VIDMM_GLOBAL *v9; // rcx
  struct _VIDMM_LOCAL_ALLOC *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned int PriorityClass; // eax
  char *v20; // r11
  char *v21; // r10
  VIDMM_GLOBAL *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  VIDMM_GLOBAL *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  VIDMM_GLOBAL *v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-38h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
  v10 = a6;
  if ( !a6 )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 12);
  if ( *((_DWORD *)this[1] + 10000) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v9, a2);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v11, v12, v13);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[1], a2, 1);
  v14 = (**((_DWORD **)a2 + 59) >> 27) & 1;
  if ( !v14 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( v14 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 59) & 0x4000) != 0 )
        *((_QWORD *)a2 + 45) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v10);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
    }
  }
  v15 = *((_QWORD *)a2 + 18);
  if ( v15 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v15,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 18) = 0LL;
  }
  v16 = (_QWORD *)((char *)a2 + 384);
  v17 = *((_QWORD *)a2 + 48);
  v18 = (_QWORD *)*((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v17 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (_QWORD *)*v18 != v16 )
  {
    __fastfail(3u);
  }
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  *v16 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v10, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94), v17);
  v20 = (char *)a2 + 288;
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v21 = (char *)*((_QWORD *)a2 + 36);
  while ( v21 != v20 )
  {
    v22 = this[1];
    v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 - 6) + 16LL) + 8LL * *(unsigned int *)(*((_QWORD *)v22 + 3) + 184LL));
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v24 = 0LL;
    VidMmRecordEviction((__int64)v22 + 7128, v24 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v22 + 2));
  }
  *((_QWORD *)a2 + 16) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  VIDMM_GLOBAL::RemoveAllocationFromMigrationTable((union _LARGE_INTEGER **)this[1], a2);
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  if ( !a5 )
  {
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(v26, a2) )
    {
      VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
      *((_DWORD *)a2 + 21) |= 0x10u;
      *((_QWORD *)a2 + 53) = *((_QWORD *)this[1] + 576);
    }
  }
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v25, v27, v28);
  v29 = this[1];
  _InterlockedOr(v30, 0);
  ++*((_QWORD *)v29 + 5);
}
