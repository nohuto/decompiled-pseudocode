/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B350
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003D168 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C003D790 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00718AC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  VIDMM_GLOBAL *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // r8d
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  VIDMM_GLOBAL *v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-38h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( *((_DWORD *)a2 + 84) )
  {
    v4 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v5 = *((_DWORD *)a2 + 18) & 0x1F;
    if ( v4 != (_DWORD)v5 )
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
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v11 = 0;
  }
  else
  {
    v11 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v11 < 0 )
    goto LABEL_23;
  if ( (**((_DWORD **)a2 + 59) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                    + 96LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
    if ( !v12 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdAssertion(v17);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v11 = -1073741801;
LABEL_23:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v8, v9, v10);
      return (unsigned int)v11;
    }
    *((_QWORD *)a2 + 45) = v12;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  v20 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 16) = v20;
  v21 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 17) = v21;
  v22 = *((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 18) = v22;
  v23 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 30) = 2;
  *((_BYTE *)a2 + 94) = 1;
  v24 = (__int64)this[20];
  *((_QWORD *)a2 + 48) = this + 19;
  *((_QWORD *)a2 + 49) = v24;
  if ( *(VIDMM_GLOBAL ***)v24 != this + 19 )
    __fastfail(3u);
  *(_QWORD *)v24 = v23;
  this[20] = v23;
  v25 = *((_DWORD *)a2 + 18);
  v28 = 1;
  if ( v25 )
  {
    v24 = (*((_DWORD *)this + 14) >> 12) & 1;
    v26 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    if ( (*((_DWORD *)a2 + 18) & 0x1F) != v26 )
    {
      v27 = (_DWORD)v24 ? 0 : *((_DWORD *)this + 4) + 1;
      if ( ((v25 >> 6) & 0x1F) != v27 )
        v28 = 0;
    }
  }
  v29 = *((_QWORD *)a2 + 12);
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v28 << 22)) & 0x400000;
  if ( v29 )
  {
    if ( *(_QWORD *)(v29 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v29, (__int64)this, *((_QWORD *)a2 + 2), 0);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v24, v29, v19);
  v30 = this[1];
  _InterlockedOr(v31, 0);
  ++*((_QWORD *)v30 + 5);
  return 0LL;
}
