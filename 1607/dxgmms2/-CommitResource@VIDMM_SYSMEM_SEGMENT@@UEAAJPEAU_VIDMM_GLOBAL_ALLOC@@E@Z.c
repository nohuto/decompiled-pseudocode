/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00640A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C001E3E4 (Template_ppq.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00643F8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  VIDMM_GLOBAL *v28; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  VIDMM_GLOBAL *v35; // r9
  signed __int32 v36[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v37; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  v10 = *((_QWORD *)this[1] + 3);
  if ( *(_BYTE *)(v10 + 2091) )
  {
    v30 = WdLogNewEntry5_WdEvent(v10, v7, v8, v9);
    *(_QWORD *)(v30 + 24) = a2;
    WdLogEvent5_WdEvent(v30);
    return 3221226166LL;
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v12 = 0;
  }
  else
  {
    v12 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v12 < 0 )
    goto LABEL_30;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 47) )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v31 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v34 + 24) = a2;
      WdLogEvent5_WdAssertion(v34);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v12 = -1073741801;
LABEL_30:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v11, v13, v14);
      return (unsigned int)v12;
    }
    *((_QWORD *)a2 + 47) = v31;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v35 = this[1];
    LODWORD(v37) = *((_DWORD *)this + 4) + 1;
    Template_ppq(v15, &EventPagingOpSysmemCommit, v16, *((_QWORD *)v35 + 3), a2, v37);
  }
  v18 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 17) = v18;
  v19 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 18) = v19;
  v20 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 19) = v20;
  v21 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v22 = (__int64)this[20];
  if ( *(VIDMM_GLOBAL ***)v22 != this + 19 )
    __fastfail(3u);
  *(_QWORD *)v21 = this + 19;
  *((_QWORD *)a2 + 51) = v22;
  *(_QWORD *)v22 = v21;
  this[20] = v21;
  v23 = *((_DWORD *)a2 + 18);
  v26 = 1;
  if ( v23 )
  {
    v22 = (*((_DWORD *)this + 14) >> 12) & 1;
    v24 = ((*((_DWORD *)this + 14) >> 12) & 1) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    if ( (*((_DWORD *)a2 + 18) & 0x1F) != v24 )
    {
      v25 = (_DWORD)v22 ? 0 : *((_DWORD *)this + 4) + 1;
      if ( ((v23 >> 6) & 0x1F) != v25 )
        v26 = 0;
    }
  }
  v27 = *((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (v26 << 23)) & 0x800000;
  if ( v27 )
  {
    if ( *(_QWORD *)(v27 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v27, (__int64)this, *((_QWORD *)a2 + 2), 0);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v22, v27, v17);
  v28 = this[1];
  _InterlockedOr(v36, 0);
  ++*((_QWORD *)v28 + 5);
  return 0LL;
}
