/*
 * XREFs of MiClearFilePointer @ 0x1401201B4
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1400E6854 (MiCheckForControlAreaDeletion.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiClearFilePointer(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 0x80000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_DWORD *)(a1 + 56) = result | 0x80000;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v4 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
    }
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      *(_QWORD *)(result + 16) = 0LL;
    else
      *(_QWORD *)result = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
  }
  return result;
}
