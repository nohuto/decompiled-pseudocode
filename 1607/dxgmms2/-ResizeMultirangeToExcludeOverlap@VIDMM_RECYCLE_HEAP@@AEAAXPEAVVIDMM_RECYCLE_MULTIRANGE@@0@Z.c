/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0061200
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061374 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C005DDD8 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005E9B8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F7CC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F838 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061180 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095318 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3,
        __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v11; // r14d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v15; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v21; // r13
  struct VIDMM_RECYCLE_RANGE *v22; // rsi
  __int64 v23; // r9
  PSLIST_ENTRY Multirange; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v28; // rbx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rdx

  v4 = *((_QWORD *)a3 + 4);
  v6 = *((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *((_QWORD *)a2 + 5);
  v11 = *((_DWORD *)a2 + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, v11, (__int64)a2, a4);
  if ( v4 > v8 )
  {
    if ( v6 >= v9 )
    {
      v13 = *((_QWORD *)a2 + 4);
      v12 = v4;
      goto LABEL_4;
    }
    v19 = *((_QWORD *)a2 + 5);
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v21 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v22 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v4);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v11, (__int64)a2, v23);
    Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                   *((_QWORD *)this + 1),
                   *((_DWORD *)a2 + 54),
                   *((_QWORD *)a2 + 10),
                   v6,
                   v19);
    v28 = (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    if ( Multirange )
    {
      Multirange[4].Next = (struct _SLIST_ENTRY *)v22;
      *((_QWORD *)&Multirange[4].Next + 1) = v21;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v25, v26, v27);
      v15 = v28;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v29 = *((_DWORD *)v22 + 16);
      if ( v29 )
      {
        v30 = v29 - 4;
        if ( v30 )
        {
          if ( v30 != 1 )
            goto LABEL_28;
          v31 = 1LL;
        }
        else
        {
          v31 = 0LL;
        }
      }
      else
      {
        v31 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v31, v22);
LABEL_28:
      if ( v22 == v21 )
        return;
      v22 = VIDMM_RECYCLE_RANGE::GetNextRange(v22);
    }
  }
  if ( v6 < v9 )
  {
    v12 = *((_QWORD *)a2 + 5);
    v13 = v6;
LABEL_4:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, v13, v12);
    v15 = a2;
LABEL_5:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v11, (__int64)v15, v14);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v17 = *((_DWORD *)a2 + 54);
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          *((_QWORD *)i + 19) = 0LL;
      }
      else
      {
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)i + 17) = 0LL;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)a2);
}
