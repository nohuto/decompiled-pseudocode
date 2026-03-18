/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003D168 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C003D790 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050870 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C007016C (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C007026C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00718AC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  struct _VIDMM_MDL *v16; // rax
  unsigned int *v17; // rcx
  struct _VIDMM_MDL *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  void *v26; // rdx
  int v27; // ecx
  BOOL v28; // ebp
  VIDMM_GLOBAL *v29; // rdi
  __int64 v30; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  VIDMM_GLOBAL *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  int v39; // r8d
  int v40; // eax
  int v41; // eax
  __int64 v42; // r8
  VIDMM_GLOBAL *v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( *((_DWORD *)a2 + 84) )
  {
    v6 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v7 = *((_DWORD *)a2 + 18) & 0x1F;
    if ( v6 != (_DWORD)v7 )
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
  if ( a3 != 1
    || (((_DWORD)this[7] & 0x20) == 0 ? (v10 = *((_QWORD *)a2 + 2)) : (v10 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 26), v10, (void **)a2 + 46),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
      v15 = 0;
    }
    else
    {
      v15 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
      if ( v15 >= 0 )
      {
        v12 = *((_QWORD *)this[1] + 3);
        if ( (*(_DWORD *)(v12 + 284) & 2) == 0 )
        {
          if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
          v16 = VidMmiProbeAndLockAllocation(a2, 0LL, *((_QWORD *)a2 + 1), IoModifyAccess, (struct VIDMM_SEGMENT *)this);
          v17 = (unsigned int *)*((_QWORD *)a2 + 59);
          v18 = v16;
          v12 = *v17;
          if ( (v12 & 8) == 0 )
            KeUnstackDetachProcess(&ApcState);
          if ( v18 )
          {
            *((_QWORD *)a2 + 13) = v18;
          }
          else
          {
            v19 = WdLogNewEntry5_WdWarning(v17, v12, v13);
            *(_QWORD *)(v19 + 24) = a2;
            WdLogEvent5_WdWarning(v19);
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
            v15 = -1073741801;
          }
        }
      }
    }
    *((_DWORD *)a2 + 21) &= ~2u;
    if ( v15 < 0 )
      goto LABEL_36;
    if ( (**((_DWORD **)a2 + 59) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                      + 96LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
              *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
      if ( !v20 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = a2;
        WdLogEvent5_WdAssertion(v25);
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
        v15 = -1073741801;
LABEL_36:
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v12, v13, v14);
        v26 = (void *)*((_QWORD *)a2 + 46);
        if ( v26 )
        {
          VIDMM_SEGMENT::MakeRangePageable((VIDMM_SEGMENT *)this, v26);
          *((_QWORD *)a2 + 46) = 0LL;
        }
        return (unsigned int)v15;
      }
      *((_QWORD *)a2 + 45) = v20;
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v27 = **((_DWORD **)a2 + 59);
    v28 = (v27 & 4) != 0 && (v27 & 0x800000) == 0;
    v29 = *this;
    v30 = *((_QWORD *)a2 + 26) / 4096LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v29
     + 25))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v30,
      v30,
      FullMDL,
      0,
      v28);
    v33 = *((_QWORD *)a2 + 27);
    *((_QWORD *)a2 + 27) = 0LL;
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_QWORD *)a2 + 16) = v33;
    v34 = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 17) = v34;
    v35 = *((_QWORD *)a2 + 25);
    *((_QWORD *)a2 + 25) = 0LL;
    *((_QWORD *)a2 + 18) = v35;
    v36 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
    *((_DWORD *)a2 + 30) = 2;
    *((_BYTE *)a2 + 94) = 1;
    v37 = (__int64)this[20];
    *((_QWORD *)a2 + 48) = this + 19;
    *((_QWORD *)a2 + 49) = v37;
    if ( *(VIDMM_GLOBAL ***)v37 != this + 19 )
      __fastfail(3u);
    *(_QWORD *)v37 = v36;
    this[20] = v36;
    v38 = *((_DWORD *)a2 + 18);
    v41 = 1;
    if ( v38 )
    {
      v37 = (*((_DWORD *)this + 14) >> 12) & 1;
      v39 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
      if ( (*((_DWORD *)a2 + 18) & 0x1F) != v39 )
      {
        v40 = (_DWORD)v37 ? 0 : *((_DWORD *)this + 4) + 1;
        if ( ((v38 >> 6) & 0x1F) != v40 )
          v41 = 0;
      }
    }
    v42 = *((_QWORD *)a2 + 12);
    *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v41 << 22)) & 0x400000;
    if ( v42 && *(_QWORD *)(v42 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v42, (__int64)this, *((_QWORD *)a2 + 2), 0);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 59) + 2LL) & 1) != 0 )
      VIDMM_GLOBAL::NotifyResidency(this[1], a2, 1u);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v37, v42, v32);
    v43 = this[1];
    _InterlockedOr(v44, 0);
    ++*((_QWORD *)v43 + 5);
    return 0LL;
  }
  return result;
}
