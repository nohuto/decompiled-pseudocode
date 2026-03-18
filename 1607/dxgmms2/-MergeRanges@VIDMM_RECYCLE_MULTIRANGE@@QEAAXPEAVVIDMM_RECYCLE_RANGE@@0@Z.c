/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005DE78
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010188 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_pppppppqq @ 0x1C001FBF8 (Template_pppppppqq.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006185C (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int64 a2,
        struct VIDMM_RECYCLE_RANGE *a3,
        __int64 a4)
{
  __int64 v5; // rbp
  struct VIDMM_RECYCLE_RANGE *v6; // rbx
  int v7; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r12
  unsigned int v14; // r14d
  VIDMM_RECYCLE_HEAP_MGR *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  VIDMM_RECYCLE_BLOCK *v19; // rcx
  bool v20; // zf
  __int64 v21; // rsi
  struct VIDMM_RECYCLE_BLOCK *v22; // rsi
  __int64 v23; // rdi
  PSLIST_ENTRY v24; // rbx
  __int64 v25; // r8
  VIDMM_RECYCLE_BLOCK *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  bool v29; // [rsp+60h] [rbp-A8h]
  bool v30; // [rsp+64h] [rbp-A4h]
  bool v31; // [rsp+68h] [rbp-A0h]
  bool v32; // [rsp+6Ch] [rbp-9Ch]
  int v33; // [rsp+70h] [rbp-98h]
  int v34; // [rsp+74h] [rbp-94h]
  int v35; // [rsp+78h] [rbp-90h]
  struct VIDMM_RECYCLE_RANGE *v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  unsigned __int64 v38; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-60h]
  struct _SLIST_ENTRY *v40; // [rsp+B0h] [rbp-58h]
  __int64 v41; // [rsp+B8h] [rbp-50h]
  bool v42; // [rsp+110h] [rbp+8h]
  bool v43; // [rsp+118h] [rbp+10h]
  bool v44; // [rsp+120h] [rbp+18h]
  bool v45; // [rsp+128h] [rbp+20h]

  v5 = *(_QWORD *)(a2 + 136);
  v6 = (struct VIDMM_RECYCLE_RANGE *)a2;
  v7 = *(_DWORD *)(a2 + 64);
  v39 = *(_QWORD *)(a2 + 32);
  v9 = *((_QWORD *)a3 + 5);
  v10 = 1LL;
  v38 = v9;
  v35 = *(_DWORD *)(a2 + 80);
  v34 = *(_DWORD *)(a2 + 92);
  v33 = v7;
  v42 = 0;
  v43 = 0;
  if ( v5 )
  {
    v42 = *(_QWORD *)(v5 + 64) == a2;
    a2 = *(_QWORD *)(v5 + 72) == (_QWORD)a3;
    v43 = *(_QWORD *)(v5 + 72) == (_QWORD)a3;
  }
  v11 = *((_QWORD *)v6 + 18);
  v37 = v11;
  v44 = 0;
  v45 = 0;
  if ( v11 )
  {
    v44 = *(_QWORD *)(v11 + 64) == (_QWORD)v6;
    a2 = *(_QWORD *)(v11 + 72) == (_QWORD)a3;
    v45 = *(_QWORD *)(v11 + 72) == (_QWORD)a3;
  }
  v12 = *((_QWORD *)v6 + 19);
  v29 = 0;
  v30 = 0;
  if ( v12 )
  {
    v29 = *(_QWORD *)(v12 + 64) == (_QWORD)v6;
    a2 = *(_QWORD *)(v12 + 72) == (_QWORD)a3;
    v30 = *(_QWORD *)(v12 + 72) == (_QWORD)a3;
  }
  v13 = *((_QWORD *)v6 + 20);
  LOBYTE(a2) = 0;
  v31 = 0;
  v32 = 0;
  if ( v13 )
  {
    v31 = *(_QWORD *)(v13 + 64) == (_QWORD)v6;
    a2 = *(_QWORD *)(v13 + 72) == (_QWORD)a3;
    v32 = *(_QWORD *)(v13 + 72) == (_QWORD)a3;
  }
  v14 = v7 - 3;
  v40 = (struct _SLIST_ENTRY *)*((_QWORD *)v6 + 16);
  v41 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  while ( 1 )
  {
    v15 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 15);
    if ( v15 == (VIDMM_RECYCLE_HEAP_MGR *)(*((_QWORD *)v6 + 9) + 72LL) )
      v36 = 0LL;
    else
      v36 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v15 - 120);
    if ( v14 <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v15, v6);
    v16 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v17 = *(_QWORD *)(v16 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_p(v16, &EventRecycleRangeDestroy, v10, v6);
    v18 = WdLogNewEntry5_WdEvent(v16, a2, v10, a4);
    *(_QWORD *)(v18 + 24) = v6;
    WdLogEvent5_WdEvent(v18);
    v19 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v6 + 9);
    v20 = (*(_QWORD *)v19)-- == 1LL;
    if ( v20 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v19);
    v21 = *(_QWORD *)(v17 + 880);
    ++*(_DWORD *)(v21 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v21) >= *(_WORD *)(v21 + 16) )
    {
      ++*(_DWORD *)(v21 + 32);
      (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v21 + 56))(v6, v21);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v21, (PSLIST_ENTRY)v6);
    }
    if ( v6 == a3 )
      break;
    v6 = v36;
  }
  v22 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 4) + 8LL) + 880LL);
  ++*(_DWORD *)(v23 + 20);
  v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
  if ( v24
    || (v27 = *(unsigned int *)(v23 + 44),
        ++*(_DWORD *)(v23 + 24),
        (v24 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v23 + 48))(
                               *(unsigned int *)(v23 + 36),
                               v27,
                               *(unsigned int *)(v23 + 40),
                               v23)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v24, v22, v39, v38);
  }
  v26 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v20 = (*(_QWORD *)v26)-- == 1LL;
  if ( v20 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v26);
  *((_DWORD *)&v24[5].Next + 3) = v34;
  LODWORD(v24[5].Next) = v35;
  LODWORD(v24[4].Next) = v33;
  *((_QWORD *)&v24[8].Next + 1) = v5;
  v24[9].Next = (struct _SLIST_ENTRY *)v37;
  *((_QWORD *)&v24[9].Next + 1) = v12;
  v24[10].Next = (struct _SLIST_ENTRY *)v13;
  if ( v42 )
    *(_QWORD *)(v5 + 64) = v24;
  if ( v43 )
    *(_QWORD *)(v5 + 72) = v24;
  if ( v44 )
    *(_QWORD *)(v37 + 64) = v24;
  if ( v45 )
    *(_QWORD *)(v37 + 72) = v24;
  if ( v29 )
    *(_QWORD *)(v12 + 64) = v24;
  if ( v30 )
    *(_QWORD *)(v12 + 72) = v24;
  if ( v31 )
    *(_QWORD *)(v13 + 64) = v24;
  if ( v32 )
    *(_QWORD *)(v13 + 72) = v24;
  v24[8].Next = v40;
  v40->Next = (PSLIST_ENTRY)((char *)v24 + 120);
  *((_QWORD *)&v24[7].Next + 1) = v41;
  *(_QWORD *)(v41 + 8) = (char *)v24 + 120;
  if ( v33 >= 3 )
  {
    if ( v33 <= 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v24);
    }
    else if ( v33 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v24);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v28 = *((_QWORD *)this + 10);
    Template_pppppppqq(
      *(_QWORD *)(v28 + 32),
      v28,
      v25,
      **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v28 + 32) + 8LL) + 8LL),
      v24,
      v28,
      *(_QWORD *)(v28 + 56),
      *(_QWORD *)(v28 + 32),
      v24[2].Next,
      *((_QWORD *)&v24[2].Next + 1),
      **(_DWORD **)(v28 + 32),
      LODWORD(v24[4].Next));
  }
}
