/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066940
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0048454 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0052668 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055AB0 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005E860 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0084C6C (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0084D6C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  struct _VIDMM_MDL *v18; // rax
  unsigned int *v19; // rcx
  struct _VIDMM_MDL *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  void *v28; // rdx
  int v29; // ecx
  int v30; // ebp
  VIDMM_GLOBAL *v31; // rdi
  __int64 v32; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v34; // r9
  __int64 v35; // rax
  VIDMM_GLOBAL *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  int v39; // r8d
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  struct _VIDMM_GLOBAL_ALLOC *v43; // r8
  VIDMM_GLOBAL *v44; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( *((_DWORD *)a2 + 84) )
  {
    v6 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0LL : (unsigned int)(*((_DWORD *)this + 4) + 1);
    v7 = *((_DWORD *)a2 + 18) & 0x1F;
    if ( (_DWORD)v6 != (_DWORD)v7 )
    {
      v8 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0LL : (unsigned int)(*((_DWORD *)this + 4) + 1);
      v9 = (*((_DWORD *)a2 + 18) >> 6) & 0x1F;
      if ( (_DWORD)v8 != v9
        && ((_DWORD)v7 || v9)
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_q(v8, &EventPerformanceWarning, v7, 17);
      }
    }
  }
  v10 = *((_QWORD *)this[1] + 3);
  if ( *(_BYTE *)(v10 + 1951) )
  {
    v11 = WdLogNewEntry5_WdEvent(v10, v6);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdEvent(v11);
    return 3221226166LL;
  }
  if ( a3 != 1
    || (((_DWORD)this[7] & 0x20) == 0 ? (v13 = *((_QWORD *)a2 + 2)) : (v13 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 26), v13, (void **)a2 + 46),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
      v17 = 0;
    }
    else
    {
      v17 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
      if ( v17 >= 0 )
      {
        v14 = *((_QWORD *)this[1] + 3);
        if ( (*(_DWORD *)(v14 + 284) & 4) == 0 )
        {
          if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
          v18 = VidMmiProbeAndLockAllocation(
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  IoModifyAccess,
                  (struct VIDMM_SEGMENT *)this,
                  0LL);
          v19 = (unsigned int *)*((_QWORD *)a2 + 59);
          v20 = v18;
          v14 = *v19;
          if ( (v14 & 8) == 0 )
            KeUnstackDetachProcess(&ApcState);
          if ( v20 )
          {
            *((_QWORD *)a2 + 13) = v20;
          }
          else
          {
            v21 = WdLogNewEntry5_WdWarning(v19);
            *(_QWORD *)(v21 + 24) = a2;
            WdLogEvent5_WdWarning(v21);
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
            v17 = -1073741801;
          }
        }
      }
    }
    *((_DWORD *)a2 + 21) &= ~2u;
    if ( v17 < 0 )
      goto LABEL_38;
    if ( (**((_DWORD **)a2 + 59) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                      + 112LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
              *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
      if ( !v22 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        *(_QWORD *)(v27 + 24) = a2;
        WdLogEvent5_WdAssertion(v27);
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
        v17 = -1073741801;
LABEL_38:
        DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v14, v15, v16);
        v28 = (void *)*((_QWORD *)a2 + 46);
        if ( v28 )
        {
          VIDMM_SEGMENT::MakeRangePageable((VIDMM_SEGMENT *)this, v28);
          *((_QWORD *)a2 + 46) = 0LL;
        }
        return (unsigned int)v17;
      }
      *((_QWORD *)a2 + 45) = v22;
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v29 = **((_DWORD **)a2 + 59);
    if ( (v29 & 4) == 0 || (v30 = 1, (v29 & 0x800000) != 0) )
      v30 = 0;
    v31 = *this;
    v32 = *((_QWORD *)a2 + 26) / 4096LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, int))v31
     + 25))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v32,
      v32,
      FullMDL,
      0,
      v30);
    v35 = *((_QWORD *)a2 + 27);
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_QWORD *)a2 + 16) = v35;
    *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 25);
    v36 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
    *((_DWORD *)a2 + 30) = 2;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 25) = 0LL;
    *((_BYTE *)a2 + 94) = 1;
    v37 = (__int64)this[20];
    *((_QWORD *)a2 + 48) = this + 19;
    *((_QWORD *)a2 + 49) = v37;
    if ( *(VIDMM_GLOBAL ***)v37 != this + 19 )
      __fastfail(3u);
    *(_QWORD *)v37 = v36;
    this[20] = v36;
    v38 = *((_DWORD *)a2 + 18);
    if ( !v38
      || ((v37 = (*((_DWORD *)this + 14) >> 12) & 1, ((*((_DWORD *)this + 14) >> 12) & 1) == 0)
        ? (v39 = *((_DWORD *)this + 4) + 1)
        : (v39 = 0),
          (*((_DWORD *)a2 + 18) & 0x1F) == v39
       || (!(_DWORD)v37 ? (v40 = *((_DWORD *)this + 4) + 1) : (v40 = 0), v41 = ((v38 >> 6) & 0x1F) == v40, v42 = 0, v41)) )
    {
      v42 = 1;
    }
    v43 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 12);
    *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v42 << 23)) & 0x800000;
    if ( v43 && *((_QWORD *)v43 + 1) )
      VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v43, (__int64)this, *((_QWORD *)a2 + 2), 0);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 59) + 2LL) & 1) != 0 )
    {
      LOBYTE(v43) = 1;
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, v43);
    }
    DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v37, (__int64)v43, v34);
    v44 = this[1];
    _InterlockedOr(v45, 0);
    ++*((_QWORD *)v44 + 5);
    return 0LL;
  }
  return result;
}
