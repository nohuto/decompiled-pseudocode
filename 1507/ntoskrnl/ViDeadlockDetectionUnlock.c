/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x140750D24
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
 *     <none>
 */

__int64 __fastcall ViDeadlockDetectionUnlock(int a1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  if ( a1 )
  {
    ViDeadlockDatabaseOwner = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ViDeadlockDatabaseLock, retaddr);
    else
      ViDeadlockDatabaseLock = 0;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ViDeadlockDatabaseLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ViDeadlockDatabaseLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ViDeadlockDatabaseLock);
  }
  return result;
}
