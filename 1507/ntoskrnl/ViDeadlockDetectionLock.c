/*
 * XREFs of ViDeadlockDetectionLock @ 0x140750C40
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14074F4A0 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14074F508 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14074F604 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140750BF4 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140750D84 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1407519B4 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

char __fastcall ViDeadlockDetectionLock(int a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ett

  v1 = 0;
  if ( a1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ViDeadlockDatabaseLock);
    }
    else
    {
      if ( _interlockedbittestandset(&ViDeadlockDatabaseLock, 0x1Fu) )
        v1 = ExpWaitForSpinLockExclusiveAndAcquire(&ViDeadlockDatabaseLock);
      while ( (ViDeadlockDatabaseLock & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (ViDeadlockDatabaseLock & 0x40000000) == 0 )
          _InterlockedCompareExchange(
            &ViDeadlockDatabaseLock,
            ViDeadlockDatabaseLock | 0x40000000,
            ViDeadlockDatabaseLock);
        if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v1);
      }
    }
    CurrentThread = KeGetCurrentThread();
    ViDeadlockDatabaseOwner = (__int64)CurrentThread;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(CurrentThread) = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ViDeadlockDatabaseLock);
  }
  else
  {
    _m_prefetchw(&ViDeadlockDatabaseLock);
    v3 = ViDeadlockDatabaseLock & 0x7FFFFFFF;
    LODWORD(CurrentThread) = _InterlockedCompareExchange(
                               &ViDeadlockDatabaseLock,
                               (ViDeadlockDatabaseLock & 0x7FFFFFFF) + 1,
                               ViDeadlockDatabaseLock & 0x7FFFFFFF);
    if ( v3 != (_DWORD)CurrentThread )
      LOBYTE(CurrentThread) = ExpWaitForSpinLockSharedAndAcquire(&ViDeadlockDatabaseLock);
  }
  return (char)CurrentThread;
}
