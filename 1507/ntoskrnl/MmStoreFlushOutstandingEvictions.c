/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x140231A58
 * Callers:
 *     SmStoreCompressionStart @ 0x1406D9F78 (SmStoreCompressionStart.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  unsigned __int8 CurrentIrql; // di
  int v1; // eax
  unsigned int v2; // ebx
  void *retaddr; // [rsp+58h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140354180);
  }
  else
  {
    v2 = 0;
    if ( _interlockedbittestandset(&dword_140354180, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140354180);
    while ( (dword_140354180 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_140354180 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_140354180, dword_140354180 | 0x40000000, dword_140354180);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
  }
  v1 = dword_140354120;
  if ( !dword_140354120 )
  {
    KeResetEvent(&stru_140354150);
    v1 = dword_140354120;
  }
  dword_140354120 = v1 + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140354180, retaddr);
  else
    dword_140354180 = 0;
  __writecr8(CurrentIrql);
  KeSetEvent(&stru_140354138, 0, 0);
  return KeWaitForSingleObject(&stru_140354150, WrKernel, 0, 0, 0LL);
}
