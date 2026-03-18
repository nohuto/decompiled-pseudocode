/*
 * XREFs of MmEnableProcessSvm @ 0x1402106F8
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 MmEnableProcessSvm()
{
  _KPROCESS *Process; // rsi
  volatile signed __int32 *v1; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  signed __int32 v5; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v5 = *v1;
      if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v1, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  BYTE3(Process[2].ProfileListHead.Blink) |= 8u;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
}
