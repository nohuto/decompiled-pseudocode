/*
 * XREFs of ViDeadlockCanProceed @ 0x1407507C0
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14074F604 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140750B4C (ViDeadlockCheckStackLimits.c)
 */

__int64 __fastcall ViDeadlockCanProceed(int *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !ViDeadlockDetectionEnabled )
    return 0LL;
  if ( (unsigned int)KeNumberProcessors_0 > 4 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    return 0LL;
  if ( !ViDeadlockGlobals )
    return 0LL;
  ViDeadlockCheckStackLimits();
  if ( ViDeadlockVerifyOnlySpinlocks )
  {
    if ( a2 && (unsigned int)(a2 - 5) > 2 )
      return 0LL;
  }
  if ( a1 == &ViDeadlockDatabaseLock )
    return 0LL;
  LOBYTE(v2) = ViDeadlockDatabaseOwner != (_QWORD)KeGetCurrentThread();
  return v2;
}
