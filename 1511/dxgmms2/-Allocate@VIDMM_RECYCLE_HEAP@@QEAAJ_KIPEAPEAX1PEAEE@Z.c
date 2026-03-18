/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C005A720 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00599B4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B770 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C9D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CFE0 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C005D108 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C005D238 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        unsigned __int8 *a6,
        unsigned __int8 a7)
{
  __int64 v8; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // edx
  void *v25; // rcx
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  char v27; // al
  _QWORD *v29; // rax
  unsigned int v30; // r8d
  _QWORD *v31; // rax

  v8 = (unsigned int)a3;
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8004);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v12 = v8;
  v11[3] = this;
  v11[4] = a2;
  v11[5] = v8;
  WdLogEvent5_WdEvent(v11);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v8);
  if ( BlockAndRange
    || (v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13),
        v29[3] = this,
        v29[4] = a2,
        v29[5] = v12,
        WdLogEvent5_WdEvent(v29),
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v30, a7)) != 0LL) )
  {
    v16 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v16 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v16 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v17 = VIDMM_RECYCLE_MULTIRANGE::Commit((struct _SLIST_ENTRY *)BlockAndRange, a7, a6);
    v19 = v17;
    if ( v17 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v18);
      v31[6] = a7;
      v31[3] = BlockAndRange;
      v31[4] = a2;
      v31[5] = v12;
      v31[7] = v19;
      WdLogEvent5_WdWarning(v31);
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)BlockAndRange);
    }
    else
    {
      v20 = *((_QWORD *)BlockAndRange + 9);
      v21 = *(_QWORD *)(v20 + 120);
      if ( v21 != *(_QWORD *)(v20 + 72) + 72LL )
      {
        v22 = v21 - 120;
        if ( v22 )
        {
          if ( !*(_DWORD *)(v22 + 64) )
            VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)BlockAndRange + 10), v22);
        }
      }
      *a4 = BlockAndRange;
      v23 = 1LL;
      v24 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v24 - 3) > 3 || (unsigned int)(v24 - 5) <= 1 )
        v25 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v25 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v25;
      for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v27 = *((_BYTE *)i + 84);
        *((_BYTE *)i + 84) = 0;
        if ( !v27 )
          break;
        if ( i == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          goto LABEL_15;
      }
      LOBYTE(v23) = 0;
LABEL_15:
      *a6 = v23;
    }
  }
  else
  {
    LODWORD(v19) = -1073741801;
  }
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)i, &EventProfilerExit, v23, 8004);
  return (unsigned int)v19;
}
