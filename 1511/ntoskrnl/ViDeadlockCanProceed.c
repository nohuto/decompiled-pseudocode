/*
 * XREFs of ViDeadlockCanProceed @ 0x1406CCF34
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1406CBF70 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x1406CC308 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x1406CD2C0 (ViDeadlockCheckStackLimits.c)
 */

__int64 __fastcall ViDeadlockCanProceed(LONG *a1, int a2)
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
