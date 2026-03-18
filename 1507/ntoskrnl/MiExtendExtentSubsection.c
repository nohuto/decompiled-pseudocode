/*
 * XREFs of MiExtendExtentSubsection @ 0x14021E4DC
 * Callers:
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiExtendExtentSubsection(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  signed __int32 v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(*a1 + 72LL);
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
  LOBYTE(a2) = CurrentIrql;
  MiInitializeFileExtents(a1, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  return 0LL;
}
