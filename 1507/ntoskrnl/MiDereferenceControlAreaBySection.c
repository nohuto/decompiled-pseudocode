/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140089ED0
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiSectionDelete @ 0x1404B6100 (MiSectionDelete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // r14d
  signed __int32 v6; // eax

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 72);
      if ( (v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v6 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v6 | 0x40000000, v6);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) -= v2;
  return MiCheckControlArea(a1, CurrentIrql);
}
