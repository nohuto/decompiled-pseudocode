/*
 * XREFs of SepInitSingletonEntry @ 0x14002D19C
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  signed __int32 v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (volatile signed __int32 *)SepGetSingletonEntryFromIndexNumber();
  v4 = result;
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(result);
    }
    else
    {
      v6 = 0;
      if ( _interlockedbittestandset(result, 0x1Fu) )
        v6 = ExpWaitForSpinLockExclusiveAndAcquire(result);
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
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 1) = a2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
    result = (volatile signed __int32 *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
