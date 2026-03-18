/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x14021D8F0
 * Callers:
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReturnCrossPartitionCharges(_QWORD *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // ebx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  *a1 -= a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
