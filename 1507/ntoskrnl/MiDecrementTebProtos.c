/*
 * XREFs of MiDecrementTebProtos @ 0x140232F20
 * Callers:
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecrementTebProtos(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // esi
  __int64 i; // rdx
  unsigned int v9; // edi
  int PteTimeStamp; // eax
  int v11; // r8d

  v5 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
    for ( i = *(unsigned int *)v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  PteTimeStamp = MiGetPteTimeStamp(*a1, i, a3, a4);
  *a1 = MiUpdatePageFileHighInPte(*a1, (unsigned int)(PteTimeStamp - 1));
  LOBYTE(v7) = v11 == 0;
  MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
  return v7;
}
