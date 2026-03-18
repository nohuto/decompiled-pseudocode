/*
 * XREFs of MiZeroSectionObjectPointer @ 0x14012FDF4
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiZeroSectionObjectPointer(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  volatile signed __int32 *v5; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // esi
  signed __int32 v8; // eax
  __int64 v9; // r14
  unsigned int v10; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD **)(a1 + 40);
  if ( (a3 & 0x1000000) != 0 )
    v3 += 2;
  KeAbPostRelease((ULONG_PTR)v3);
  v5 = (volatile signed __int32 *)(a2 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 72);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a2 + 72));
    while ( 1 )
    {
      v8 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v9 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
    while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E780 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  *v3 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
  else
    dword_14034E780 = 0;
  *(_DWORD *)(a2 + 56) |= 0xC0000u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 72, retaddr);
  else
    *v5 = 0;
  __writecr8(CurrentIrql);
  return v9;
}
