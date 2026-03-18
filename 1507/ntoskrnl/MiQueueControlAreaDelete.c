/*
 * XREFs of MiQueueControlAreaDelete @ 0x140212170
 * Callers:
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

LONG __fastcall MiQueueControlAreaDelete(__int64 a1)
{
  __int16 *v2; // rax
  __int16 *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  *(_QWORD *)a1 = 0LL;
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  *(_QWORD *)a1 = *((_QWORD *)v3 + 179);
  *((_QWORD *)v3 + 179) = a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  return KeSetEvent((PRKEVENT)(v3 + 704), 0, 0);
}
