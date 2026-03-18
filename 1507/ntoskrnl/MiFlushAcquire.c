/*
 * XREFs of MiFlushAcquire @ 0x14011997C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReferenceSubsection @ 0x14008595C (MiReferenceSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // edi
  unsigned int v9; // esi
  signed __int32 v10; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
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
      v10 = *v4;
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
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2, 0LL);
      MiReferenceSubsection(a3, 0LL);
    }
    ++*(_QWORD *)(a1 + 40);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
    v8 = 1;
  }
  __writecr8(CurrentIrql);
  return v8;
}
