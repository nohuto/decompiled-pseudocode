/*
 * XREFs of MiClearCommitReleaseState @ 0x14020EF3C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiClearCommitReleaseState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  signed __int32 v5; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    while ( 1 )
    {
      v5 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  *(_BYTE *)(a1 + 219) &= 0x3Fu;
  return MiUnlockWorkingSetExclusive(a1, CurrentIrql);
}
