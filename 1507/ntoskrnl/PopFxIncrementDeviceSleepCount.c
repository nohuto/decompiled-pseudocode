/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x140149F64
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x1403EF484 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall PopFxIncrementDeviceSleepCount(__int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // esi
  signed __int32 v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v1 = 0LL;
  if ( v1 )
  {
    v2 = (volatile signed __int32 *)(v1 + 88);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1 + 88);
    }
    else
    {
      v4 = 0;
      if ( _interlockedbittestandset(v2, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v1 + 88));
      while ( 1 )
      {
        v5 = *v2;
        if ( (*v2 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v2, v5 | 0x40000000, v5);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
    }
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 616LL) & 1) == 0 )
      ++*(_DWORD *)(v1 + 124);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1 + 88, retaddr);
    else
      *v2 = 0;
    __writecr8(CurrentIrql);
  }
}
