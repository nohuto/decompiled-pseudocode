/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B770
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005B8F8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005C380 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C005D458 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062264 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // rbp
  __int64 v5; // rax
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r15
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  PSLIST_ENTRY v11; // rsi
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64); // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // [rsp+60h] [rbp+8h]

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
    v7 = *((_QWORD *)NextRange + 15);
    if ( v7 == *((_QWORD *)NextRange + 9) + 72LL )
      NextRange = 0LL;
    else
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v7 - 120);
  }
  v8 = *((_QWORD *)this + 10);
  v9 = *((_QWORD *)this + 5);
  v19 = *((_DWORD *)this + 54);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL) + 408LL);
  ++*(_DWORD *)(v10 + 20);
  v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v10);
  if ( v11
    || (v12 = *(unsigned int *)(v10 + 44),
        v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v10 + 48),
        v14 = *(unsigned int *)(v10 + 40),
        v15 = *(unsigned int *)(v10 + 36),
        ++*(_DWORD *)(v10 + 24),
        (v11 = (PSLIST_ENTRY)v13(v15, v12, v14, v10)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v11, v19, v8, i, v9);
    v11[4].Next = (struct _SLIST_ENTRY *)NextRange;
    *((_QWORD *)&v11[4].Next + 1) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v11);
    v16 = *((_DWORD *)this + 54);
    if ( !v16 )
    {
      v17 = 2LL;
LABEL_12:
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v17, v11);
      return;
    }
    v18 = v16 - 1;
    if ( !v18 )
    {
      v17 = 1LL;
      goto LABEL_12;
    }
    if ( v18 == 1 )
    {
      v17 = 0LL;
      goto LABEL_12;
    }
  }
}
