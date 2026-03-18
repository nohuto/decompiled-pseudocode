/*
 * XREFs of ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095638
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006165C (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F7CC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F838 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061180 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006213C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

struct _SLIST_ENTRY *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_RANGE *v4; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  PSLIST_ENTRY Multirange; // rbx
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // ecx
  struct VIDMM_RECYCLE_RANGE *Next; // r14
  struct VIDMM_RECYCLE_RANGE *v13; // r15
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  struct _SLIST_ENTRY *result; // rax

  VIDMM_RECYCLE_RANGE::GetPreviousRange(a2);
  NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  Multirange = 0LL;
  v9 = 0LL;
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 64);
    if ( (v10 & 0xFFFFFFFA) == 0 && v10 != 1 )
      Multirange = *(PSLIST_ENTRY *)(v6 + 136);
  }
  if ( NextRange )
  {
    if ( *((_DWORD *)NextRange + 16) == 4 || (v11 = *(_DWORD *)(v6 + 64), v11 == 5) || !v11 )
      v9 = *((_QWORD *)NextRange + 17);
  }
  if ( Multirange )
  {
    if ( v9 )
    {
      Next = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
      v13 = *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, (__int64)Multirange, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, v9, v14);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)v9);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     (__int64)this[1],
                     0,
                     *((_QWORD *)a2 + 9),
                     (__int64)Multirange[2].Next,
                     *(_QWORD *)(v9 + 40));
      Multirange[4].Next = (struct _SLIST_ENTRY *)Next;
      *((_QWORD *)&Multirange[4].Next + 1) = v13;
      while ( 1 )
      {
        *((_QWORD *)Next + 17) = Multirange;
        if ( Next == v13 )
          break;
        Next = VIDMM_RECYCLE_RANGE::GetNextRange(Next);
      }
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, (__int64)Multirange, v7);
      *((_QWORD *)&Multirange[4].Next + 1) = a2;
      v16 = *((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 17) = Multirange;
      *((_QWORD *)&Multirange[2].Next + 1) = v16;
    }
  }
  else if ( v9 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, v9, v7);
    *(_QWORD *)(v9 + 64) = a2;
    Multirange = (PSLIST_ENTRY)v9;
    v17 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 17) = v9;
    *(_QWORD *)(v9 + 32) = v17;
  }
  else
  {
    result = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
               (__int64)this[1],
               0,
               *((_QWORD *)a2 + 9),
               *((_QWORD *)a2 + 4),
               *((_QWORD *)a2 + 5));
    Multirange = result;
    if ( !result )
      return result;
    result[4].Next = (struct _SLIST_ENTRY *)a2;
    *((_QWORD *)&result[4].Next + 1) = a2;
    *((_QWORD *)a2 + 17) = result;
  }
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, (__int64)Multirange, v15);
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)Multirange, 1);
  return Multirange;
}
