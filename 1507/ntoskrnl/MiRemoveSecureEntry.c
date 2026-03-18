/*
 * XREFs of MiRemoveSecureEntry @ 0x1400899A0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14053D95C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 **v5; // rsi
  volatile signed __int32 *v6; // r14
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // ebp
  signed __int32 v10; // eax
  __int64 *i; // rax

  v4 = 0;
  v5 = (__int64 **)(a1 + 56);
  v6 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v6);
    while ( 1 )
    {
      v10 = *v6;
      if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, v10 | 0x40000000, v10);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  for ( i = *v5; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 2 && v4 <= 1 )
      ++v4;
    if ( i == a2 )
    {
      v7 = 1;
      *v5 = (__int64 *)*i;
    }
    if ( v4 > 1 && v7 == 1 )
      break;
    v5 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive(v6, CurrentIrql);
  if ( (a2[2] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(a1, a2[2], a2[3]);
  if ( v4 == 1 )
    *(_DWORD *)(a1 + 48) &= ~0x4000u;
  ExFreePoolWithTag(a2, 0);
}
