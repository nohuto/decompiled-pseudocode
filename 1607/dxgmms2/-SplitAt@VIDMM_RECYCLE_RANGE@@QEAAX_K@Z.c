/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C0061940
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005E830 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C0096198 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_pppppppqq @ 0x1C001FBF8 (Template_pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FB08 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006185C (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095318 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095EB0 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  bool v4; // r15
  __int64 v7; // rax
  bool v8; // si
  __int64 v9; // rax
  bool v10; // r14
  __int64 v11; // rax
  bool v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r9
  signed __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // [rsp+70h] [rbp+70h]
  __int64 v35; // [rsp+78h] [rbp+78h]
  _BYTE v36[32]; // [rsp+C0h] [rbp+C0h] BYREF

  v2 = (__int64 *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = *((_QWORD *)this + 17);
  v4 = 0;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72) == (_QWORD)this;
  v7 = *((_QWORD *)this + 18);
  v8 = 0;
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v13 = *((_DWORD *)this + 22);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *((_QWORD *)this + 5);
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a2 + *((_QWORD *)this + 4);
  v14 = *((_QWORD *)this + 9);
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL) + 880LL);
  *v2 = v15;
  ++*(_DWORD *)(v15 + 20);
  v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
  if ( v16
    || (v17 = *v2,
        ++*(_DWORD *)(v17 + 24),
        (v16 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v17 + 48))(
                               *(unsigned int *)(v17 + 36),
                               *(unsigned int *)(v17 + 44),
                               *(unsigned int *)(v17 + 40),
                               v17)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init(
      (VIDMM_RECYCLE_RANGE *)v16,
      *(struct VIDMM_RECYCLE_BLOCK **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
      *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    LODWORD(v16[4].Next) = *((_DWORD *)this + 16);
    LODWORD(v16[5].Next) = *((_DWORD *)this + 20);
    *((_DWORD *)&v16[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v21 = (char *)this + 120;
    v22 = *((_QWORD *)this + 15);
    *(_QWORD *)(v22 + 8) = (char *)v16 + 120;
    *((_QWORD *)this + 15) = (char *)v16 + 120;
    v16[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v16[7].Next + 1) = v22;
    *((_QWORD *)&v16[8].Next + 1) = *((_QWORD *)this + 17);
    v16[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v16[9].Next + 1) = *((_QWORD *)this + 19);
    v16[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v16;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v16;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v16;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v16;
    v23 = *((_DWORD *)this + 16);
    if ( v23 < 3 )
      goto LABEL_22;
    if ( v23 > 4 )
    {
      if ( v23 != 5 )
      {
LABEL_22:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          Template_p((__int64)v21, &EventRecycleRangeDestroy, v19, this);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v30 = *((_QWORD *)this + 9);
            Template_pppppppqq(
              *(_QWORD *)(v30 + 32),
              v30,
              v29,
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v30 + 32) + 8LL) + 8LL),
              this,
              v30,
              *(_QWORD *)(v30 + 56),
              *(_QWORD *)(v30 + 32),
              *((_QWORD *)this + 4),
              *((_QWORD *)this + 5),
              **(_DWORD **)(v30 + 32),
              *((_DWORD *)this + 16));
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v32 = *((_QWORD *)this + 9);
              v33 = *(_QWORD *)(v32 + 32);
              LODWORD(v35) = v16[4].Next;
              LODWORD(v34) = *(_DWORD *)v33;
              Template_pppppppqq(
                v33,
                v32,
                v31,
                **(_QWORD **)(*(_QWORD *)(v33 + 8) + 8LL),
                v16,
                v32,
                *(_QWORD *)(v32 + 56),
                v33,
                v16[2].Next,
                *((_QWORD *)&v16[2].Next + 1),
                v34,
                v35);
            }
          }
        }
        return;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v16,
        v19,
        v20);
      v21 = (char *)v16[2].Next - *((_QWORD *)&v16[2].Next + 1);
      v26 = _InterlockedExchangeAdd64(
              &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
              (unsigned __int64)v21);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v16,
        v19,
        v20);
      v21 = (char *)v16[2].Next - *((_QWORD *)&v16[2].Next + 1);
      v26 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, (unsigned __int64)v21);
    }
    if ( (__int64)&v21[v26] < 0 && g_IsInternalRelease )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v24, v19, v25);
      v28[3] = 270LL;
      v28[4] = 9LL;
      v28[5] = 0LL;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    goto LABEL_22;
  }
  v27 = WdLogNewEntry5_WdWarning(v18);
  *(_QWORD *)(v27 + 24) = this;
  WdLogEvent5_WdWarning(v27);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
}
