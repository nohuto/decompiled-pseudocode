/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C005D458
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B770 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005C044 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C0082CC0 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pppppppqq @ 0x1C001E0A8 (Template_pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A1AC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A23C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C005D374 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081D50 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00829D8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
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
  char *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+70h] [rbp+70h]
  __int64 v30; // [rsp+78h] [rbp+78h]
  _BYTE v31[32]; // [rsp+C0h] [rbp+C0h] BYREF

  v2 = (__int64 *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL);
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
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *((_QWORD *)this + 5);
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = a2 + *((_QWORD *)this + 4);
  v14 = *((_QWORD *)this + 9);
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL) + 400LL);
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
      *(struct VIDMM_RECYCLE_BLOCK **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    LODWORD(v16[4].Next) = *((_DWORD *)this + 16);
    LODWORD(v16[5].Next) = *((_DWORD *)this + 20);
    *((_DWORD *)&v16[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v20 = (char *)this + 120;
    v21 = *((_QWORD *)this + 15);
    *(_QWORD *)(v21 + 8) = (char *)v16 + 120;
    *((_QWORD *)this + 15) = (char *)v16 + 120;
    v16[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v16[7].Next + 1) = v21;
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
    v22 = *((_DWORD *)this + 16);
    if ( v22 >= 3 )
    {
      if ( v22 > 4 )
      {
        if ( v22 == 5 )
        {
          VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
            (struct VIDMM_RECYCLE_RANGE *)v16);
          v20 = (char *)_InterlockedExchangeAdd64(
                          &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                          (unsigned __int64)v16[2].Next - *((_QWORD *)&v16[2].Next + 1));
        }
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v16);
        v20 = (char *)_InterlockedExchangeAdd64(
                        &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                        (unsigned __int64)v16[2].Next - *((_QWORD *)&v16[2].Next + 1));
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      Template_p((__int64)v20, &EventRecycleRangeDestroy, v19, this);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        v25 = *((_QWORD *)this + 9);
        Template_pppppppqq(
          *(_QWORD *)(v25 + 32),
          v25,
          v24,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v25 + 32) + 8LL) + 8LL),
          this,
          v25,
          *(_QWORD *)(v25 + 56),
          *(_QWORD *)(v25 + 32),
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5),
          **(_DWORD **)(v25 + 32),
          *((_DWORD *)this + 16));
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          v27 = *((_QWORD *)this + 9);
          v28 = *(_QWORD *)(v27 + 32);
          LODWORD(v30) = v16[4].Next;
          LODWORD(v29) = *(_DWORD *)v28;
          Template_pppppppqq(
            v28,
            v27,
            v26,
            **(_QWORD **)(*(_QWORD *)(v28 + 8) + 8LL),
            v16,
            v27,
            *(_QWORD *)(v27 + 56),
            v28,
            v16[2].Next,
            *((_QWORD *)&v16[2].Next + 1),
            v29,
            v30);
        }
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v18);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdWarning(v23);
    if ( v13 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  }
}
