/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00553C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0052668 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055AB0 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  VIDMM_GLOBAL *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  VIDMM_GLOBAL *v32; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-38h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( *((_DWORD *)a2 + 84) )
  {
    v4 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0LL : (unsigned int)(*((_DWORD *)this + 4) + 1);
    v5 = *((_DWORD *)a2 + 18) & 0x1F;
    if ( (_DWORD)v4 != (_DWORD)v5 )
    {
      v6 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0LL : (unsigned int)(*((_DWORD *)this + 4) + 1);
      v7 = (*((_DWORD *)a2 + 18) >> 6) & 0x1F;
      if ( (_DWORD)v6 != v7
        && ((_DWORD)v5 || v7)
        && bTracingEnabled
        && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_q(v6, &EventPerformanceWarning, v5, 17);
      }
    }
  }
  v8 = *((_QWORD *)this[1] + 3);
  if ( *(_BYTE *)(v8 + 1951) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, v4);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdEvent(v9);
    return 3221226166LL;
  }
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v14 = 0;
  }
  else
  {
    v14 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v14 < 0 )
    goto LABEL_25;
  if ( (**((_DWORD **)a2 + 59) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = a2;
      WdLogEvent5_WdAssertion(v20);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v14 = -1073741801;
LABEL_25:
      DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v11, v12, v13);
      return (unsigned int)v14;
    }
    *((_QWORD *)a2 + 45) = v15;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  v22 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 16) = v22;
  v23 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 17) = v23;
  v24 = *((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 18) = v24;
  v25 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 30) = 2;
  *((_BYTE *)a2 + 94) = 1;
  v26 = (__int64)this[20];
  *((_QWORD *)a2 + 48) = this + 19;
  *((_QWORD *)a2 + 49) = v26;
  if ( *(VIDMM_GLOBAL ***)v26 != this + 19 )
    __fastfail(3u);
  *(_QWORD *)v26 = v25;
  this[20] = v25;
  v27 = *((_DWORD *)a2 + 18);
  v30 = 1;
  if ( v27 )
  {
    v26 = (*((_DWORD *)this + 14) >> 12) & 1;
    v28 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    if ( (*((_DWORD *)a2 + 18) & 0x1F) != v28 )
    {
      v29 = (_DWORD)v26 ? 0 : *((_DWORD *)this + 4) + 1;
      if ( ((v27 >> 6) & 0x1F) != v29 )
        v30 = 0;
    }
  }
  v31 = *((_QWORD *)a2 + 12);
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v30 << 23)) & 0x800000;
  if ( v31 )
  {
    if ( *(_QWORD *)(v31 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v31, (__int64)this, *((_QWORD *)a2 + 2), 0);
  }
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v26, v31, v21);
  v32 = this[1];
  _InterlockedOr(v33, 0);
  ++*((_QWORD *)v32 + 5);
  return 0LL;
}
