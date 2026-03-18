/*
 * XREFs of MiGetCrossPartitionCharges @ 0x14021D2F4
 * Callers:
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebp
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  v6 = a1[4];
  if ( !v6 )
    goto LABEL_23;
  v7 = *a1;
  if ( *a1 < v6 && v7 + a2 > v7 )
  {
    if ( v7 + a2 > v6 )
    {
      ++a1[1];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
      else
        dword_14034E740 = 0;
LABEL_29:
      __writecr8(CurrentIrql);
      return v5;
    }
LABEL_23:
    *a1 += a2;
    if ( *a1 > a1[2] )
      a1[2] = *a1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    v5 = 1;
    goto LABEL_29;
  }
  ++a1[1];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  return 0LL;
}
