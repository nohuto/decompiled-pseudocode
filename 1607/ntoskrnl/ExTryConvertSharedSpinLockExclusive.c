/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x140099D60
 * Callers:
 *     ExpAddTagForBigPages @ 0x140012050 (ExpAddTagForBigPages.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1402237C0 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14022DE28 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG v2; // edx
  volatile LONG v3; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v2 = *SpinLock;
  v3 = *SpinLock;
  v8 = 0;
  if ( (v3 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v2 & 0x40000000) == 0 )
      {
        v6 = _InterlockedCompareExchange(SpinLock, v2 | 0x40000000, v2);
        v5 = v2 == v6;
        v2 = v6;
        if ( !v5 )
          continue;
      }
      KeYieldProcessorEx(&v8);
      v2 = *SpinLock;
    }
    while ( (v2 & 0xBFFFFFFF) != 0x80000001 );
  }
  return 1;
}
