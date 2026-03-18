/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0069480
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068CF0 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064DA0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00681E0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C006A080 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned int v10; // r14d
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v12; // edx
  int v13; // edx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v16; // r8
  __int64 v17; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v19; // r13
  struct VIDMM_RECYCLE_RANGE *v20; // rsi
  PSLIST_ENTRY Multirange; // rax
  __int64 v22; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v23; // rbx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx

  v3 = *((_QWORD *)a3 + 4);
  v5 = *((_QWORD *)a3 + 5);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_QWORD *)a2 + 5);
  v10 = *((_DWORD *)a2 + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, v10, (__int64)a2);
  if ( v3 > v7 )
  {
    if ( v5 >= v8 )
    {
      v15 = *((_QWORD *)a2 + 4);
      v14 = v3;
      goto LABEL_15;
    }
    v17 = *((_QWORD *)a2 + 5);
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v19 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v20 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v3);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)a2);
    Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                   *((_QWORD *)this + 1),
                   *((_DWORD *)a2 + 54),
                   *((_QWORD *)a2 + 10),
                   v5,
                   v17);
    v23 = (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    if ( Multirange )
    {
      Multirange[4].Next = (struct _SLIST_ENTRY *)v20;
      *((_QWORD *)&Multirange[4].Next + 1) = v19;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v22);
      v16 = v23;
      goto LABEL_20;
    }
    while ( 1 )
    {
      v24 = *((_DWORD *)v20 + 16);
      if ( v24 )
      {
        v25 = v24 - 4;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_28;
          v26 = 1LL;
        }
        else
        {
          v26 = 0LL;
        }
      }
      else
      {
        v26 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v26, (__int64)v20);
LABEL_28:
      if ( v20 == v19 )
        return;
      v20 = VIDMM_RECYCLE_RANGE::GetNextRange(v20);
    }
  }
  if ( v5 < v8 )
  {
    v14 = *((_QWORD *)a2 + 5);
    v15 = v5;
LABEL_15:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, v15, v14);
    v16 = a2;
LABEL_20:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)v16);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v12 = *((_DWORD *)a2 + 54);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
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
