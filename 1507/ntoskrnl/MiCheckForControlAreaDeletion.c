/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x1400E6854
 * Callers:
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiClearFilePointer @ 0x1401201B4 (MiClearFilePointer.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  __int16 *v2; // rax
  int v3; // r8d
  __int16 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 *v8; // rdx
  __int64 v9; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) && (*(_DWORD *)(a1 + 56) & 0x101) == 0 )
  {
    v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
    *(_DWORD *)(a1 + 56) = v3 | 1;
    v4 = v2;
    MiClearFilePointer(a1, v5);
    MiRemoveUnusedSegment(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
    }
    else
    {
      v7 = 0;
      if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
      while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E740 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
    }
    v8 = (__int64 *)*((_QWORD *)v4 + 158);
    v9 = a1 + 8;
    *(_QWORD *)(a1 + 8) = v4 + 628;
    *(_QWORD *)(a1 + 16) = v8;
    if ( (__int16 *)*v8 != v4 + 628 )
      __fastfail(3u);
    *v8 = v9;
    *((_QWORD *)v4 + 158) = v9;
    *(_DWORD *)(a1 + 56) |= 0x8000000u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    KeReleaseSemaphoreEx((__int64)(v4 + 612), 0, 1, v6, 0);
  }
}
