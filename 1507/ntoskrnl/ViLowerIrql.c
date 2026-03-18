/*
 * XREFs of ViLowerIrql @ 0x14025B4A0
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

__int64 __fastcall ViLowerIrql(unsigned __int8 a1)
{
  __int64 result; // rax

  result = KeGetCurrentIrql();
  if ( a1 < (unsigned __int8)result )
  {
    result = a1;
    __writecr8(a1);
  }
  return result;
}
