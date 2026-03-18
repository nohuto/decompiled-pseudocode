/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00654E0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0065B00 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C0067C4C (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068CF0 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069EA0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006A108 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
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
  _QWORD *v16; // rax
  unsigned int v17; // r8d
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  int v28; // edx
  void *v29; // rcx
  char v30; // al

  v8 = (unsigned int)a3;
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8004);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v12 = v8;
  v11[3] = this;
  v11[4] = a2;
  v11[5] = v8;
  WdLogEvent5_WdEvent(v11);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v8);
  if ( BlockAndRange
    || (v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13),
        v16[3] = this,
        v16[4] = a2,
        v16[5] = v12,
        WdLogEvent5_WdEvent(v16),
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v17, a7)) != 0LL) )
  {
    v21 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v21 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v21 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v22 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, a7, a6);
    v20 = v22;
    if ( v22 >= 0 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9));
      if ( NextRange && !*((_DWORD *)NextRange + 16) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10), NextRange);
      *a4 = BlockAndRange;
      v19 = 1LL;
      v28 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v28 - 3) > 3 || (unsigned int)(v28 - 5) <= 1 )
        v29 = (void *)*((_QWORD *)BlockAndRange + 6);
      else
        v29 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      *a5 = v29;
      for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        v30 = *((_BYTE *)i + 84);
        *((_BYTE *)i + 84) = 0;
        if ( !v30 )
          break;
        if ( i == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
          goto LABEL_24;
      }
      LOBYTE(v19) = 0;
LABEL_24:
      *a6 = v19;
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[6] = a7;
      v26[3] = BlockAndRange;
      v26[4] = a2;
      v26[5] = v12;
      v26[7] = v20;
      WdLogEvent5_WdWarning(v26);
      if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], BlockAndRange);
    }
  }
  else
  {
    LODWORD(v20) = -1073741801;
  }
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)i, &EventProfilerExit, v19, 8004);
  return (unsigned int)v20;
}
