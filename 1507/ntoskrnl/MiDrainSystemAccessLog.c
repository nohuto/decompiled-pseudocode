/*
 * XREFs of MiDrainSystemAccessLog @ 0x140131290
 * Callers:
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  signed __int32 v4; // eax
  _QWORD *v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v3 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v3 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
      while ( 1 )
      {
        v4 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v4 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v4 | 0x40000000, v4);
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
    }
    v5 = *(_QWORD **)(a1 + 16);
    if ( v5 )
    {
      MiEmptyPageAccessLog(v5);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    MiUnlockWorkingSetExclusive(a1, CurrentIrql);
  }
}
