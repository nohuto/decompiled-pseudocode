/*
 * XREFs of MiReleaseImageSection @ 0x14002D97C
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReleaseImageSection(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edi
  signed __int32 v7; // eax
  __int64 v8; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (volatile signed __int32 *)(a2 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 72);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(a2 + 72);
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
  v8 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_DWORD *)(a2 + 56) &= ~2u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  KeAbPostRelease(v2 + 16);
  return v8;
}
