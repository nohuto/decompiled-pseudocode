/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006A108
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00681E0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // rsi
  __int64 v5; // rax
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r14
  PSLIST_ENTRY Multirange; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx

  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = a2 + *((_QWORD *)this + 4); NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
      break;
  }
  v5 = *((_QWORD *)NextRange + 4);
  if ( v5 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v5);
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    PreviousRange = NextRange;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
                 *((_DWORD *)this + 54),
                 *((_QWORD *)this + 10),
                 i,
                 *((_QWORD *)this + 5));
  v9 = (__int64)Multirange;
  if ( Multirange )
  {
    Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&Multirange[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange, v8);
    v10 = *((_DWORD *)this + 54);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return;
        v12 = 0LL;
      }
      else
      {
        v12 = 1LL;
      }
    }
    else
    {
      v12 = 2LL;
    }
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(*((_QWORD *)this + 10) + 32LL), v12, v9);
  }
}
