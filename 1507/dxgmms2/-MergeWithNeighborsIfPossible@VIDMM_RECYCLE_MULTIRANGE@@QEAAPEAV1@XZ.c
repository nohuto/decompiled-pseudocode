/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00686A4
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetMultirangeForRange@VIDMM_RECYCLE_MULTIRANGE@@AEAAPEAV1@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066CBC (-GetMultirangeForRange@VIDMM_RECYCLE_MULTIRANGE@@AEAAPEAV1@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00681E0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        VIDMM_RECYCLE_MULTIRANGE *this)
{
  _QWORD *v2; // r13
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  struct _SLIST_ENTRY *MultirangeForRange; // r12
  bool v5; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  VIDMM_RECYCLE_MULTIRANGE *v7; // rbx
  bool v8; // al
  unsigned int v9; // r14d
  struct _SLIST_ENTRY *Next; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rbx
  struct _SLIST_ENTRY *v14; // rdx
  PSLIST_ENTRY Multirange; // rbx
  __int64 v17; // rdx
  struct _SLIST_ENTRY *v18; // rdi
  __int64 v19; // r8
  unsigned int v20; // [rsp+70h] [rbp+8h]
  struct VIDMM_RECYCLE_MULTIRANGE *v21; // [rsp+78h] [rbp+10h]

  v2 = (_QWORD *)*((_QWORD *)this + 10);
  v20 = *((_DWORD *)this + 54);
  PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(*((VIDMM_RECYCLE_RANGE **)this + 8));
  MultirangeForRange = 0LL;
  v5 = 0;
  if ( PreviousRange )
  {
    MultirangeForRange = (struct _SLIST_ENTRY *)VIDMM_RECYCLE_MULTIRANGE::GetMultirangeForRange(this, PreviousRange);
    if ( MultirangeForRange )
      v5 = 1;
  }
  NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)this + 9));
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0;
  if ( NextRange )
  {
    v21 = VIDMM_RECYCLE_MULTIRANGE::GetMultirangeForRange(this, NextRange);
    v7 = v21;
    if ( v21 )
      v8 = 1;
  }
  if ( v5 )
  {
    if ( v8 )
    {
      v9 = *((_DWORD *)this + 22);
      Next = MultirangeForRange[4].Next;
      v11 = *((_QWORD *)v7 + 9);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v9, MultirangeForRange);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v9, this);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v9, v7);
      v12 = (__int64)MultirangeForRange[2].Next;
      v13 = *((_QWORD *)v7 + 5);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), MultirangeForRange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), (struct _SLIST_ENTRY *)this);
      v14 = (struct _SLIST_ENTRY *)v21;
      goto LABEL_17;
    }
    v7 = this;
    v21 = this;
  }
  else
  {
    if ( !v8 )
      return this;
    MultirangeForRange = (struct _SLIST_ENTRY *)this;
  }
  v9 = *((_DWORD *)this + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v9, MultirangeForRange);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v9, v7);
  v12 = (__int64)MultirangeForRange[2].Next;
  v13 = *((_QWORD *)v7 + 5);
  Next = MultirangeForRange[4].Next;
  v11 = *((_QWORD *)v21 + 9);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), MultirangeForRange);
  v14 = (struct _SLIST_ENTRY *)v21;
LABEL_17:
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), v14);
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*(_QWORD *)(v2[4] + 8LL), v20, (__int64)v2, v12, v13);
  Multirange[4].Next = Next;
  *((_QWORD *)&Multirange[4].Next + 1) = v11;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v17);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree((_QWORD *)v2[4], v9, (__int64)Multirange);
  if ( *v2 == 1LL && !v20 )
  {
    v18 = Multirange[4].Next;
    if ( !LODWORD(v18[4].Next) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v2[4], 2LL, Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v2[4] + 8LL), v18, v19);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
