/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14025B3F8
 * Callers:
 *     VfDeadlockBeforeCallDriver @ 0x14074F508 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14074F604 (VfDeadlockDeleteMemoryRange.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

__int64 __fastcall ViDeadlockDetectionTryConvertSharedToExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = ExpTryConvertSharedSpinLockExclusiveInstrumented(&ViDeadlockDatabaseLock, retaddr, a3, a4);
  }
  else
  {
    if ( !_interlockedbittestandset(&ViDeadlockDatabaseLock, 0x1Fu) )
    {
      v5 = 1;
      while ( (ViDeadlockDatabaseLock & 0xBFFFFFFF) != 0x80000001 )
      {
        if ( (ViDeadlockDatabaseLock & 0x40000000) == 0 )
          _InterlockedCompareExchange(
            &ViDeadlockDatabaseLock,
            ViDeadlockDatabaseLock | 0x40000000,
            ViDeadlockDatabaseLock);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      goto LABEL_14;
    }
    v5 = 0;
  }
  if ( v5 )
LABEL_14:
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return v5;
}
