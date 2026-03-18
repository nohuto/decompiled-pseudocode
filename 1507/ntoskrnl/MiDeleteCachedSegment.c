/*
 * XREFs of MiDeleteCachedSegment @ 0x140210914
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 **v4; // rsi
  volatile signed __int32 *i; // rbx
  unsigned int v6; // ebx
  int *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v4 = (volatile signed __int32 **)(a1 + 1360);
  for ( i = *v4; i != (volatile signed __int32 *)v4; i = *(volatile signed __int32 **)i )
  {
    v2 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v4 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      dword_14034E740 = 0;
      goto LABEL_21;
    }
    v7 = &dword_14034E740;
LABEL_19:
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
LABEL_21:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  v9 = (_QWORD *)(v2 + 8);
  v10 = *(_QWORD *)(v2 + 8);
  v11 = *(_QWORD **)(v2 + 16);
  if ( *(_QWORD *)(v10 + 8) != v2 + 8 || (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  *(_DWORD *)(v2 + 56) &= ~0x8000000u;
  *(_QWORD *)(v2 + 16) = v2 + 8;
  *v9 = v9;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  v12 = (*(_DWORD *)(v2 + 56) >> 5) & 1;
  if ( !v12 && *(_DWORD *)(v2 + 76) )
  {
    MiInsertUnusedSegment(v2);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      *(_DWORD *)(v2 + 72) = 0;
      goto LABEL_21;
    }
    v7 = (int *)(v2 + 72);
    goto LABEL_19;
  }
  v13 = 0LL;
  v15 = 0LL;
  if ( v12 || (LOBYTE(v10) = CurrentIrql, result = MiFlushControlArea(v2, v10, &v15), v13 = v15, (_DWORD)result == 1) )
    result = MiDestroySection(v2, CurrentIrql);
  if ( v13 )
    return MiReleaseControlAreaWaiters(v13);
  return result;
}
