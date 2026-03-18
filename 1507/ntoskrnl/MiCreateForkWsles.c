/*
 * XREFs of MiCreateForkWsles @ 0x140001A9C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCreateForkWsle @ 0x140001B8C (MiCreateForkWsle.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 MiCreateForkWsles()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // rbp
  int v2; // edx
  __int64 v3; // rax
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edi
  signed __int32 v7; // eax
  __int64 v8; // rdx

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6BFFFFFFFF8uLL;
  v2 = 0;
  v3 = 3LL;
  v4 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v3;
  }
  while ( v3 );
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v4);
    while ( 1 )
    {
      v7 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  LOBYTE(v2) = CurrentIrql;
  MiCreateForkWsle((_DWORD)v4, v2, v0, v1, 3);
  LOBYTE(v8) = CurrentIrql;
  return MiUnlockWorkingSetExclusive(v4, v8);
}
