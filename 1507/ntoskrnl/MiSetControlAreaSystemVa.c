/*
 * XREFs of MiSetControlAreaSystemVa @ 0x1401588D8
 * Callers:
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // esi
  signed __int32 v7; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v7 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  *(_DWORD *)(a1 + 56) |= 0x10000000u;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 92) |= 0x2000000u;
  else
    *(_DWORD *)(a1 + 92) &= ~0x2000000u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
