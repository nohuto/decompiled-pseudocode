/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005A9B0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C005BF4C (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005C044 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C9D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081EC4 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008206C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0082228 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A014 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C005AE90 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(struct _SLIST_ENTRY *this, char a2)
{
  struct _SLIST_ENTRY *Next; // rbx
  struct VIDMM_RECYCLE_RANGE *v5; // r9
  struct VIDMM_RECYCLE_RANGE *v6; // r8
  int v7; // ecx
  int v8; // r10d
  __int64 v9; // rdx
  struct _SLIST_ENTRY *v10; // rbx
  struct _SLIST_ENTRY *v12; // rsi
  __int64 v13; // r8

  Next = this[4].Next;
  v5 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v6 = (struct VIDMM_RECYCLE_RANGE *)Next;
  v7 = (int)Next[4].Next;
  v8 = *((_DWORD *)&Next[5].Next + 3);
  while ( 1 )
  {
    if ( LODWORD(Next[4].Next) != v7 || *((_DWORD *)&Next[5].Next + 3) != v8 )
    {
      if ( v5 != v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_MULTIRANGE *)this, v5, v6);
      v7 = (int)Next[4].Next;
      v5 = (struct VIDMM_RECYCLE_RANGE *)Next;
      v8 = *((_DWORD *)&Next[5].Next + 3);
    }
    v6 = (struct VIDMM_RECYCLE_RANGE *)Next;
    if ( Next == *(&this[4].Next + 1) )
      break;
    v9 = *((_QWORD *)&Next[7].Next + 1);
    if ( v9 == *((_QWORD *)&Next[4].Next + 1) + 72LL )
      Next = 0LL;
    else
      Next = (struct _SLIST_ENTRY *)(v9 - 120);
  }
  if ( v5 != (struct VIDMM_RECYCLE_RANGE *)Next )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges((VIDMM_RECYCLE_MULTIRANGE *)this, v5, (struct VIDMM_RECYCLE_RANGE *)Next);
  v10 = this[5].Next;
  if ( v10->Next != (struct _SLIST_ENTRY *)1 )
    return 0;
  if ( *((_DWORD *)&this[13].Next + 2) )
    return 0;
  if ( a2 )
    return 0;
  v12 = this[4].Next;
  if ( LODWORD(v12[4].Next) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v10[2].Next, 2LL, this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v10[2].Next->Next + 1), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v10[2].Next->Next + 1), v12, v13);
  return 1;
}
