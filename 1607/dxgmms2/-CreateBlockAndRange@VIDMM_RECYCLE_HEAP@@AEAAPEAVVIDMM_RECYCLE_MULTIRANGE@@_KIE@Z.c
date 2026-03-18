/*
 * XREFs of ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006149C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010188 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00101A8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00101D0 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     Template_pppppppqq @ 0x1C001FBF8 (Template_pppppppqq.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C005D920 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C005DD6C (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F838 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F8D4 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C005F95C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        char a4)
{
  ULONG_PTR SmallAllocationBlockSize; // rdi
  char v7; // dl
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_BLOCK *v9; // rax
  __int64 v10; // rcx
  VIDMM_RECYCLE_BLOCK *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct VIDMM_RECYCLE_RANGE *Range; // rax
  struct VIDMM_RECYCLE_RANGE *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // r9
  PSLIST_ENTRY Multirange; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  PSLIST_ENTRY v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8

  SmallAllocationBlockSize = a2;
  if ( VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
         (VIDMM_RECYCLE_HEAP_MGR *)this,
         (unsigned int)(*(_DWORD *)this - 5) <= 1) > a2 )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v8, v7);
  v9 = (VIDMM_RECYCLE_BLOCK *)operator new(0x70uLL, 0x31316956u, PagedPool);
  if ( v9 )
    v11 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v9, (struct VIDMM_RECYCLE_HEAP *)this);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C00355C0);
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = 8649LL;
    WdLogEvent5_WdLowResource(v12);
    return 0LL;
  }
  if ( (int)VIDMM_RECYCLE_BLOCK::Allocate(v11, SmallAllocationBlockSize, a4) < 0 )
  {
    _InterlockedIncrement(&dword_1C00355C0);
    v14 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v14 + 24) = 8659LL;
    WdLogEvent5_WdLowResource(v14);
LABEL_10:
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v11);
    return 0LL;
  }
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(this[1], v11, *((_QWORD *)v11 + 5), *((_QWORD *)v11 + 6));
  v17 = Range;
  if ( !Range )
    goto LABEL_10;
  *((_QWORD *)Range + 16) = (char *)v11 + 72;
  v18 = (_QWORD *)((char *)Range + 120);
  *v18 = (char *)v11 + 72;
  v19 = *((_QWORD *)v11 + 5);
  *((_QWORD *)v11 + 10) = v18;
  *((_QWORD *)v11 + 9) = v18;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange((__int64)this[1], 0, (__int64)v11, v19, *((_QWORD *)v11 + 6));
  v23 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(this[1], (struct _SLIST_ENTRY *)v17, v21, v22);
    return 0LL;
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)v17;
  *((_QWORD *)&Multirange[4].Next + 1) = v17;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*((_QWORD **)v11 + 4), 2LL, (__int64)Multirange, v22);
  *((_QWORD *)v17 + 17) = v23;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pppppppqq(
      v25,
      v24,
      v26,
      **((_QWORD **)this[1] + 1),
      v17,
      v11,
      *((_QWORD *)v11 + 7),
      this,
      *((_QWORD *)v17 + 4),
      *((_QWORD *)v17 + 5),
      *(_DWORD *)this,
      *((_DWORD *)v17 + 16));
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v23;
}
