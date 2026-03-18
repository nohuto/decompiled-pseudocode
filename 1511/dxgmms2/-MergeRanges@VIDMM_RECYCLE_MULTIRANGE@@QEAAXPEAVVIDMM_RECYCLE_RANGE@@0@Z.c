/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005AE90
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0011D08 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pppppppqq @ 0x1C001E0A8 (Template_pppppppqq.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A1AC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A23C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C005D374 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  unsigned __int64 v3; // rax
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  __int64 v5; // rdx
  bool v6; // r12
  unsigned __int64 v7; // rax
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r15d
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  VIDMM_RECYCLE_BLOCK *v19; // rcx
  bool v20; // zf
  __int64 v21; // rdi
  struct VIDMM_RECYCLE_BLOCK *v22; // rsi
  __int64 v23; // rdi
  PSLIST_ENTRY v24; // rbx
  __int64 v25; // r8
  VIDMM_RECYCLE_BLOCK *v26; // rcx
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64, __int64, __int64); // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  bool v32; // [rsp+60h] [rbp-B8h]
  bool v33; // [rsp+64h] [rbp-B4h]
  bool v34; // [rsp+68h] [rbp-B0h]
  bool v35; // [rsp+6Ch] [rbp-ACh]
  int v36; // [rsp+70h] [rbp-A8h]
  int v37; // [rsp+74h] [rbp-A4h]
  int v38; // [rsp+78h] [rbp-A0h]
  struct VIDMM_RECYCLE_RANGE *v39; // [rsp+80h] [rbp-98h]
  unsigned __int64 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+90h] [rbp-88h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  struct _SLIST_ENTRY *v44; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-60h]
  __int64 v46; // [rsp+C0h] [rbp-58h]
  bool v48; // [rsp+128h] [rbp+10h]
  bool v49; // [rsp+130h] [rbp+18h]
  bool v50; // [rsp+138h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = a2;
  v5 = *((unsigned int *)a2 + 16);
  v40 = v3;
  v6 = 0;
  v7 = *((_QWORD *)a3 + 5);
  v9 = *((_QWORD *)v4 + 17);
  v10 = 1LL;
  v45 = v7;
  v38 = *((_DWORD *)v4 + 20);
  v37 = *((_DWORD *)v4 + 23);
  v36 = v5;
  v35 = 0;
  if ( v9 )
  {
    v6 = *(_QWORD *)(v9 + 64) == (_QWORD)v4;
    v35 = *(_QWORD *)(v9 + 72) == (_QWORD)a3;
  }
  v11 = *((_QWORD *)v4 + 18);
  v42 = v11;
  v34 = 0;
  v33 = 0;
  if ( v11 )
  {
    v34 = *(_QWORD *)(v11 + 64) == (_QWORD)v4;
    v33 = *(_QWORD *)(v11 + 72) == (_QWORD)a3;
  }
  v12 = *((_QWORD *)v4 + 19);
  v41 = v12;
  v48 = 0;
  v49 = 0;
  if ( v12 )
  {
    v48 = *(_QWORD *)(v12 + 64) == (_QWORD)v4;
    v49 = *(_QWORD *)(v12 + 72) == (_QWORD)a3;
  }
  v13 = *((_QWORD *)v4 + 20);
  v43 = v13;
  v50 = 0;
  v32 = 0;
  if ( v13 )
  {
    v50 = *(_QWORD *)(v13 + 64) == (_QWORD)v4;
    v32 = *(_QWORD *)(v13 + 72) == (_QWORD)a3;
  }
  v14 = v5 - 3;
  v44 = (struct _SLIST_ENTRY *)*((_QWORD *)v4 + 16);
  v46 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  while ( 1 )
  {
    v15 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 15);
    if ( v15 == (VIDMM_RECYCLE_HEAP_MGR *)(*((_QWORD *)v4 + 9) + 72LL) )
      v39 = 0LL;
    else
      v39 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v15 - 120);
    if ( v14 <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, v4);
    v16 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v17 = *(_QWORD *)(v16 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      Template_p(v16, &EventRecycleRangeDestroy, v10, v4);
    v18 = WdLogNewEntry5_WdEvent(v16, v5);
    *(_QWORD *)(v18 + 24) = v4;
    WdLogEvent5_WdEvent(v18);
    v19 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v4 + 9);
    v20 = (*(_QWORD *)v19)-- == 1LL;
    if ( v20 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v19);
    v21 = *(_QWORD *)(v17 + 400);
    ++*(_DWORD *)(v21 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v21) >= *(_WORD *)(v21 + 16) )
    {
      ++*(_DWORD *)(v21 + 32);
      (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v21 + 56))(v4, v21);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v21, (PSLIST_ENTRY)v4);
    }
    if ( v4 == a3 )
      break;
    v4 = v39;
  }
  v22 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 4) + 8LL) + 400LL);
  ++*(_DWORD *)(v23 + 20);
  v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
  if ( v24
    || (v27 = *(unsigned int *)(v23 + 44),
        v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v23 + 48),
        v29 = *(unsigned int *)(v23 + 40),
        v30 = *(unsigned int *)(v23 + 36),
        ++*(_DWORD *)(v23 + 24),
        (v24 = (PSLIST_ENTRY)v28(v30, v27, v29, v23)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v24, v22, v40, v45);
  }
  v26 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v20 = (*(_QWORD *)v26)-- == 1LL;
  if ( v20 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v26);
  *((_DWORD *)&v24[5].Next + 3) = v37;
  LODWORD(v24[5].Next) = v38;
  *((_QWORD *)&v24[9].Next + 1) = v41;
  LODWORD(v24[4].Next) = v36;
  *((_QWORD *)&v24[8].Next + 1) = v9;
  v24[9].Next = (struct _SLIST_ENTRY *)v42;
  v24[10].Next = (struct _SLIST_ENTRY *)v43;
  if ( v6 )
    *(_QWORD *)(v9 + 64) = v24;
  if ( v35 )
    *(_QWORD *)(v9 + 72) = v24;
  if ( v34 )
    *(_QWORD *)(v42 + 64) = v24;
  if ( v33 )
    *(_QWORD *)(v42 + 72) = v24;
  if ( v48 )
    *(_QWORD *)(v41 + 64) = v24;
  if ( v49 )
    *(_QWORD *)(v41 + 72) = v24;
  if ( v50 )
    *(_QWORD *)(v43 + 64) = v24;
  if ( v32 )
    *(_QWORD *)(v43 + 72) = v24;
  v24[8].Next = v44;
  v44->Next = (PSLIST_ENTRY)((char *)v24 + 120);
  *((_QWORD *)&v24[7].Next + 1) = v46;
  *(_QWORD *)(v46 + 8) = (char *)v24 + 120;
  if ( v36 >= 3 )
  {
    if ( v36 > 4 )
    {
      if ( v36 == 5 )
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v24);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v24);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v31 = *((_QWORD *)this + 10);
    Template_pppppppqq(
      *(_QWORD *)(v31 + 32),
      v31,
      v25,
      **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL) + 8LL),
      v24,
      v31,
      *(_QWORD *)(v31 + 56),
      *(_QWORD *)(v31 + 32),
      v24[2].Next,
      *((_QWORD *)&v24[2].Next + 1),
      **(_DWORD **)(v31 + 32),
      LODWORD(v24[4].Next));
  }
}
