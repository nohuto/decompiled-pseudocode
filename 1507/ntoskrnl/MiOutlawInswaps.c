/*
 * XREFs of MiOutlawInswaps @ 0x1400DDD88
 * Callers:
 *     MiBeginProcessClean @ 0x1400DDC48 (MiBeginProcessClean.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int16 *v2; // rax
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  signed __int32 v6; // eax
  __int64 v7; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1452));
  v3 = (volatile signed __int32 *)(v2 + 512);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 512);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v2 + 256);
    while ( 1 )
    {
      v6 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v6 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v6 | 0x40000000, v6);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  v7 = *(_QWORD *)(a1 + 1504);
  *(_QWORD *)(a1 + 1504) = 2LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return v7;
}
