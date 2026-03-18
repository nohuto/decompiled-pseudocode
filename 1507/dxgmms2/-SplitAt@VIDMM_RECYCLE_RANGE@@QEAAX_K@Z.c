/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0067484 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006A108 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C006A558 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     Template_pppppppqq @ 0x1C001099C (Template_pppppppqq.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064DA0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064F14 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00661E8 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068E08 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // r14
  __int64 v6; // rax
  bool v7; // si
  __int64 v8; // rax
  bool v9; // r12
  __int64 v10; // rax
  bool v11; // r13
  unsigned int v12; // r15d
  struct VIDMM_RECYCLE_RANGE *Range; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct VIDMM_RECYCLE_RANGE *v17; // rdi
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+58h] [rbp+50h]
  __int64 v29; // [rsp+60h] [rbp+58h]

  v2 = *((_QWORD *)this + 17);
  v3 = 0;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 72) == (_QWORD)this;
  v6 = *((_QWORD *)this + 18);
  v7 = 0;
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 72) == (_QWORD)this;
  v8 = *((_QWORD *)this + 19);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 72) == (_QWORD)this;
  v10 = *((_QWORD *)this + 20);
  v11 = 0;
  if ( v10 )
    v11 = *(_QWORD *)(v10 + 72) == (_QWORD)this;
  v12 = *((_DWORD *)this + 22);
  if ( v12 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v12, (__int64)this);
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
            *((struct VIDMM_RECYCLE_BLOCK **)this + 9),
            a2 + *((_QWORD *)this + 4),
            *((_QWORD *)this + 5));
  v17 = Range;
  if ( Range )
  {
    *((_DWORD *)Range + 16) = *((_DWORD *)this + 16);
    *((_DWORD *)Range + 20) = *((_DWORD *)this + 20);
    *((_DWORD *)Range + 23) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v19 = (char *)this + 120;
    v20 = *((_QWORD *)this + 15);
    *(_QWORD *)(v20 + 8) = (char *)Range + 120;
    *((_QWORD *)this + 15) = (char *)Range + 120;
    *((_QWORD *)Range + 16) = (char *)this + 120;
    *((_QWORD *)Range + 15) = v20;
    *((_QWORD *)Range + 17) = *((_QWORD *)this + 17);
    *((_QWORD *)Range + 18) = *((_QWORD *)this + 18);
    *((_QWORD *)Range + 19) = *((_QWORD *)this + 19);
    *((_QWORD *)Range + 20) = *((_QWORD *)this + 20);
    if ( v3 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = Range;
    if ( v7 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = Range;
    if ( v9 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = Range;
    if ( v11 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = Range;
    v21 = *((_DWORD *)this + 16);
    if ( v21 >= 3 )
    {
      if ( v21 <= 4 )
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
          v17);
        v19 = (char *)_InterlockedExchangeAdd64(
                        &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                        *((_QWORD *)v17 + 4) - *((_QWORD *)v17 + 5));
      }
      else if ( v21 == 5 )
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
          v17);
        v19 = (char *)_InterlockedExchangeAdd64(
                        &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                        *((_QWORD *)v17 + 4) - *((_QWORD *)v17 + 5));
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      Template_p((__int64)v19, &EventRecycleRangeDestroy, v16, this);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        v23 = *((_QWORD *)this + 9);
        v24 = *(_QWORD *)(v23 + 32);
        Template_pppppppqq(
          v24,
          v23,
          v22,
          **(_QWORD **)(*(_QWORD *)(v24 + 8) + 8LL),
          this,
          v23,
          *(_QWORD *)(v23 + 56),
          v24,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5),
          *(_DWORD *)v24,
          *((_DWORD *)this + 16));
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          v26 = *((_QWORD *)this + 9);
          v27 = *(_QWORD *)(v26 + 32);
          LODWORD(v29) = *((_DWORD *)v17 + 16);
          LODWORD(v28) = *(_DWORD *)v27;
          Template_pppppppqq(
            v27,
            v26,
            v25,
            **(_QWORD **)(*(_QWORD *)(v27 + 8) + 8LL),
            v17,
            v26,
            *(_QWORD *)(v26 + 56),
            v27,
            *((_QWORD *)v17 + 4),
            *((_QWORD *)v17 + 5),
            v28,
            v29);
        }
      }
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdWarning(v18);
    if ( v12 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD **)(*((_QWORD *)this + 9) + 32LL), v12, (__int64)this);
  }
}
