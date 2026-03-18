/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x14012C4A4
 * Callers:
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStart @ 0x1406D9F78 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // edi
  __int16 *v6; // rax
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // esi
  signed __int32 v10; // eax
  unsigned __int64 v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 1504) <= 2uLL )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1452));
  v7 = (volatile signed __int32 *)(v6 + 512);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6 + 512);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v6 + 256);
    while ( 1 )
    {
      v10 = *v7;
      if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v7, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  v11 = *(_QWORD *)(a1 + 1504);
  if ( v11 > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  else
    *v7 = 0;
  __writecr8(CurrentIrql);
  return v5;
}
