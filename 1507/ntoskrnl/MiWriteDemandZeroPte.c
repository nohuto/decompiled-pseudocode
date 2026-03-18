/*
 * XREFs of MiWriteDemandZeroPte @ 0x14002B3E8
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1404680B8 (MiMakeHyperRangeAccessible.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWriteDemandZeroPte(__int64 *BugCheckParameter4)
{
  __int64 DemandZeroPte; // rbx
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // esi
  signed __int32 i; // edx
  __int64 v7; // rdx

  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v3 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
    for ( i = *v3; (*v3 & 0xBFFFFFFF) != 0x80000000; i = *v3 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, i | 0x40000000, i);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter4, 1);
  *BugCheckParameter4 = DemandZeroPte;
  if ( (unsigned __int64)(BugCheckParameter4 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(BugCheckParameter4, DemandZeroPte);
  LOBYTE(v7) = CurrentIrql;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
