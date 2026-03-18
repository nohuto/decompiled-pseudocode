/*
 * XREFs of MiInsertUnusedSubsection @ 0x14010E120
 * Callers:
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiAppendSubsectionChain @ 0x140077D64 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiRemoveViewsFromSection @ 0x14010E0A4 (MiRemoveViewsFromSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1, int a2)
{
  int v4; // r14d
  __int16 *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int16 *v17; // rbx
  __int16 **v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF);
  v6 = (unsigned int)(*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 52));
  v7 = v6;
  v8 = 8 * v6;
  if ( (unsigned __int64)(8 * v6) <= 0xFE0 )
  {
    v9 = v8 + 31;
LABEL_3:
    v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_4;
  }
  v19 = (8 * (_WORD)v6) & 0xFFF;
  if ( v8 < 0x10000 && v19 <= 0xFC0 )
  {
    v9 = v8 + 15;
    goto LABEL_3;
  }
  v10 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_4:
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  *(_WORD *)(a1 + 34) |= 8u;
  qword_14034E7A8 += v10;
  v12 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) == 0 && *(_DWORD *)(a1 + 48) )
  {
    *(_DWORD *)(a1 + 48) = 0;
    v12 = *(unsigned int *)(a1 + 44);
  }
  if ( *(_QWORD *)(a1 + 104) )
  {
    v13 = (__int64 *)(a1 + 80);
    v14 = (__int64 *)(v5 + 688);
    if ( a2 == 1 )
    {
      v15 = (__int64 **)*((_QWORD *)v5 + 173);
      *v13 = (__int64)v14;
      v13[1] = (__int64)v15;
      if ( *v15 != v14 )
        __fastfail(3u);
      *v15 = v13;
      *((_QWORD *)v5 + 173) = v13;
    }
    else
    {
      v20 = *v14;
      *v13 = *v14;
      v13[1] = (__int64)v14;
      if ( *(__int64 **)(v20 + 8) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v20 + 8) = v13;
      *v14 = (__int64)v13;
    }
  }
  else
  {
    v17 = (__int16 *)(a1 + 80);
    v18 = (__int16 **)*((_QWORD *)v5 + 175);
    *(_QWORD *)v17 = v5 + 696;
    *((_QWORD *)v17 + 1) = v18;
    if ( *v18 != v5 + 696 )
      __fastfail(3u);
    *v18 = v17;
    *((_QWORD *)v5 + 175) = v17;
    *((_QWORD *)v5 + 152) += v7;
    if ( *((_QWORD *)v5 + 152) >= 0x20000uLL )
      v4 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  if ( v4 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 584), 0, 0);
  return v12;
}
