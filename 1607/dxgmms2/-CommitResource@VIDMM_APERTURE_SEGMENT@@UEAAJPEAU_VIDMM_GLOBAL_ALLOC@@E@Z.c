/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00104B8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00643F8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0066980 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0098EEC (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0098FEC (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  struct _VIDMM_MDL *v19; // rax
  unsigned int *v20; // rcx
  struct _VIDMM_MDL *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rdx
  int v28; // ecx
  int v29; // ebp
  VIDMM_GLOBAL *v30; // rdi
  __int64 v31; // rbx
  struct _MDL *FullMDL; // rax
  VIDMM_SEGMENT *v33; // rcx
  __int64 v34; // r9
  VIDMM_APERTURE_SEGMENT *v35; // rax
  VIDMM_APERTURE_SEGMENT **v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  struct _VIDMM_GLOBAL_ALLOC *v41; // r8
  VIDMM_GLOBAL *v42; // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v4 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  v11 = *((_QWORD *)this[1] + 3);
  if ( *(_BYTE *)(v11 + 2091) )
  {
    v12 = WdLogNewEntry5_WdEvent(v11, v8, v9, v10);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return 3221226166LL;
  }
  if ( v4 != 1
    || (((_DWORD)this[7] & 0x20) == 0 ? (v14 = *((_QWORD *)a2 + 2)) : (v14 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 27), v14, (void **)a2 + 48),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
      v18 = 0;
    }
    else
    {
      v18 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
      if ( v18 >= 0 )
      {
        v15 = *((_QWORD *)this[1] + 3);
        if ( (*(_DWORD *)(v15 + 300) & 4) == 0 )
        {
          if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
          v19 = VidMmiProbeAndLockAllocation(
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  IoModifyAccess,
                  (struct VIDMM_SEGMENT *)this,
                  0LL);
          v20 = (unsigned int *)*((_QWORD *)a2 + 63);
          v21 = v19;
          v15 = *v20;
          if ( (v15 & 8) == 0 )
            KeUnstackDetachProcess(&ApcState);
          if ( v21 )
          {
            *((_QWORD *)a2 + 14) = v21;
          }
          else
          {
            v22 = WdLogNewEntry5_WdWarning(v20);
            *(_QWORD *)(v22 + 24) = a2;
            WdLogEvent5_WdWarning(v22);
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
            v18 = -1073741801;
          }
        }
      }
    }
    *((_DWORD *)a2 + 21) &= ~2u;
    if ( v18 < 0 )
      goto LABEL_26;
    if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 47) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                      + 112LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
              *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
      if ( !v23 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v26 + 24) = a2;
        WdLogEvent5_WdAssertion(v26);
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
        v18 = -1073741801;
LABEL_26:
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v15, v16, v17);
        v27 = (void *)*((_QWORD *)a2 + 48);
        if ( v27 )
        {
          VIDMM_SEGMENT::MakeRangePageable((VIDMM_SEGMENT *)this, v27);
          *((_QWORD *)a2 + 48) = 0LL;
        }
        return (unsigned int)v18;
      }
      *((_QWORD *)a2 + 47) = v23;
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v28 = **((_DWORD **)a2 + 63);
    if ( (v28 & 4) == 0 || (v29 = 1, (v28 & 0x800000) != 0) )
      v29 = 0;
    v30 = *this;
    v31 = *((_QWORD *)a2 + 27) / 4096LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, int))v30
     + 25))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v31,
      v31,
      FullMDL,
      0,
      v29);
    v33 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 28);
    *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
    *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
    *((_DWORD *)a2 + 32) = 2;
    *((_QWORD *)a2 + 17) = v33;
    *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = VIDMM_SEGMENT::DriverId(v33);
    *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    *((_DWORD *)a2 + 21) &= ~8u;
    v35 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_BYTE *)a2 + 97) = 1;
    v36 = (VIDMM_APERTURE_SEGMENT **)this[20];
    if ( *v36 != (VIDMM_APERTURE_SEGMENT *)(this + 19) )
      __fastfail(3u);
    *(_QWORD *)v35 = this + 19;
    *((_QWORD *)a2 + 51) = v36;
    *v36 = v35;
    this[20] = v35;
    v37 = *((unsigned int *)a2 + 18);
    if ( !(_DWORD)v37
      || (v38 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this), (v37 & 0x1F) == v38)
      || (v37 = ((unsigned int)v37 >> 6) & 0x1F, v39 = (_DWORD)v37 == v38, v40 = 0, v39) )
    {
      v40 = 1;
    }
    v41 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 13);
    *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v40 << 23)) & 0x800000;
    if ( v41 && *((_QWORD *)v41 + 1) )
      VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v41, (__int64)this, *((_QWORD *)a2 + 2), 0);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 63) + 2LL) & 1) != 0 )
    {
      LOBYTE(v41) = 1;
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], (D3DGPU_VIRTUAL_ADDRESS *)a2, v41, v34);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v37, (__int64)v41, v34);
    v42 = this[1];
    _InterlockedOr(v43, 0);
    ++*((_QWORD *)v42 + 5);
    return 0LL;
  }
  return result;
}
