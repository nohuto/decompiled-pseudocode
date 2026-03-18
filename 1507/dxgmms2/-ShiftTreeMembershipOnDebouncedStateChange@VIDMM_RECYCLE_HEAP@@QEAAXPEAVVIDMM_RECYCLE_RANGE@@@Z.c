/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069CA0
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0066818 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064DA0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068E08 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C006A080 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  struct VIDMM_RECYCLE_RANGE *NextRange; // r13
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r10
  PSLIST_ENTRY Multirange; // r15
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    v4 = *((_QWORD *)a2 + 19);
    v6 = 0;
    v5 = ((unsigned int)(**(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL) - 3) <= 3) + 1;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    v4 = *((_QWORD *)a2 + 18);
    v5 = 2;
    v6 = 1;
  }
  else
  {
    v4 = v19;
    v6 = v19;
    v5 = v19;
  }
  if ( !v4 )
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree((__int64)this, v6, (__int64)a2);
    *((_DWORD *)a2 + 22) = v5;
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v5, (__int64)a2);
    return;
  }
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, v6, v4);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_QWORD *)(v4 + 40);
  v10 = *((_QWORD *)a2 + 5);
  if ( v7 < v8 )
  {
    if ( v9 > v10 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
      v12 = *(_QWORD *)(v4 + 72);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(_DWORD *)(v4 + 216),
                     *((_QWORD *)a2 + 9),
                     v13,
                     v14);
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&Multirange[4].Next + 1) = v12;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, *(_QWORD *)(v4 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v16 = *((_DWORD *)&Multirange[13].Next + 2);
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              *((_QWORD *)NextRange + 19) = Multirange;
          }
          else
          {
            *((_QWORD *)NextRange + 18) = Multirange;
          }
        }
        else
        {
          *((_QWORD *)NextRange + 17) = Multirange;
        }
        if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)&Multirange[4].Next + 1) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v4);
      v18 = (__int64)Multirange;
LABEL_31:
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v18);
      return;
    }
LABEL_26:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, v7, v8);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v18 = v4;
    goto LABEL_31;
  }
  if ( v9 > v10 )
  {
    v8 = *(_QWORD *)(v4 + 40);
    v7 = *((_QWORD *)a2 + 5);
    goto LABEL_26;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)v4);
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
