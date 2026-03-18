/*
 * XREFs of MiFlushRelease @ 0x1401198B8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 result; // rax

  v4 = (volatile signed __int32 *)(a1 + 72);
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v10 = *(unsigned int *)v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  if ( a2 )
  {
    v11 = MiDecrementSubsections(a2, a2, 0);
    v7 = MiDecrementSubsections(a3, a3, 0) + v11;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v10) = CurrentIrql;
  result = MiCheckControlArea(a1, v10);
  if ( v7 )
    return MiReturnSubsectionCharges(v7);
  return result;
}
