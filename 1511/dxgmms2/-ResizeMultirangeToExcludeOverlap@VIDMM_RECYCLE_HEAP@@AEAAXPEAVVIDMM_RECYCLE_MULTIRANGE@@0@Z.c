/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C005CE6C
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CFE0 (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0059F78 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C005ADF0 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005B8F8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081D50 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
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
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v13; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v19; // r13
  struct VIDMM_RECYCLE_RANGE *v20; // rsi
  PSLIST_ENTRY Multirange; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v25; // rbx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rdx

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
      v12 = *((_QWORD *)a2 + 4);
      v11 = v3;
      goto LABEL_4;
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
    v25 = (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    if ( Multirange )
    {
      Multirange[4].Next = (struct _SLIST_ENTRY *)v20;
      *((_QWORD *)&Multirange[4].Next + 1) = v19;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v22, v23, v24);
      v13 = v25;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v26 = *((_DWORD *)v20 + 16);
      if ( v26 )
      {
        v27 = v26 - 4;
        if ( v27 )
        {
          if ( v27 != 1 )
            goto LABEL_28;
          v28 = 1LL;
        }
        else
        {
          v28 = 0LL;
        }
      }
      else
      {
        v28 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v28, v20);
LABEL_28:
      if ( v20 == v19 )
        return;
      v20 = VIDMM_RECYCLE_RANGE::GetNextRange(v20);
    }
  }
  if ( v5 < v8 )
  {
    v11 = *((_QWORD *)a2 + 5);
    v12 = v5;
LABEL_4:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, v12, v11);
    v13 = a2;
LABEL_5:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)v13);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v15 = *((_DWORD *)a2 + 54);
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
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
