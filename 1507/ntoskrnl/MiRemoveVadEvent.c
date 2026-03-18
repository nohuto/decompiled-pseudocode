/*
 * XREFs of MiRemoveVadEvent @ 0x14021A314
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rcx
  unsigned int v7; // edi
  signed __int32 v8; // eax

  v4 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(v4);
    while ( 1 )
    {
      v8 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  for ( i = (_QWORD *)(a1 + 56); (_QWORD *)*i != a2; i = (_QWORD *)*i )
    ;
  *i = *a2;
  return MiUnlockWorkingSetExclusive((__int64)v4, CurrentIrql);
}
