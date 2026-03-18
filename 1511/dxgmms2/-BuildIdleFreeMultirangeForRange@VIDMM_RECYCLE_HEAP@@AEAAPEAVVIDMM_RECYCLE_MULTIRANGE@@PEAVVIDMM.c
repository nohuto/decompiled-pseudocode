/*
 * XREFs of ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008206C
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C005D238 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0059F78 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062264 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

struct _SLIST_ENTRY *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_RANGE *v4; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v6; // r8
  PSLIST_ENTRY Multirange; // rbx
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // ecx
  struct VIDMM_RECYCLE_RANGE *Next; // r14
  struct VIDMM_RECYCLE_RANGE *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  struct _SLIST_ENTRY *result; // rax

  VIDMM_RECYCLE_RANGE::GetPreviousRange(a2);
  NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  Multirange = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 64);
    if ( (v9 & 0xFFFFFFFA) == 0 && v9 != 1 )
      Multirange = *(PSLIST_ENTRY *)(v6 + 136);
  }
  if ( NextRange )
  {
    if ( *((_DWORD *)NextRange + 16) == 4 || (v10 = *(_DWORD *)(v6 + 64), v10 == 5) || !v10 )
      v8 = *((_QWORD *)NextRange + 17);
  }
  if ( Multirange )
  {
    if ( v8 )
    {
      Next = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
      v12 = *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, (__int64)Multirange);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, v8);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _SLIST_ENTRY *)v8);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     (__int64)this[1],
                     0,
                     *((_QWORD *)a2 + 9),
                     (__int64)Multirange[2].Next,
                     *(_QWORD *)(v8 + 40));
      Multirange[4].Next = (struct _SLIST_ENTRY *)Next;
      *((_QWORD *)&Multirange[4].Next + 1) = v12;
      while ( 1 )
      {
        *((_QWORD *)Next + 17) = Multirange;
        if ( Next == v12 )
          break;
        Next = VIDMM_RECYCLE_RANGE::GetNextRange(Next);
      }
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, (__int64)Multirange);
      *((_QWORD *)&Multirange[4].Next + 1) = a2;
      v13 = *((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 17) = Multirange;
      *((_QWORD *)&Multirange[2].Next + 1) = v13;
    }
  }
  else if ( v8 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)this, 2LL, v8);
    *(_QWORD *)(v8 + 64) = a2;
    Multirange = (PSLIST_ENTRY)v8;
    v14 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 17) = v8;
    *(_QWORD *)(v8 + 32) = v14;
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
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, (__int64)Multirange);
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(Multirange, 1);
  return Multirange;
}
