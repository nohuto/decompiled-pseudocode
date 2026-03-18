/*
 * XREFs of KeQueryBasePriorityThread @ 0x1400506E0
 * Callers:
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v4; // ett
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  char v7; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2 + 64);
  }
  else
  {
    _m_prefetchw((const void *)(v2 + 64));
    v4 = *(_DWORD *)(v2 + 64) & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 64), v4 + 1, v4) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v2 + 64));
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(char *)(a1 + 563) - *(char *)(v2 + 444);
  v7 = *(_BYTE *)(a1 + 645);
  if ( v7 )
    v6 = 16 * v7;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2 + 64, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 64));
  }
  __writecr8(CurrentIrql);
  return v6;
}
