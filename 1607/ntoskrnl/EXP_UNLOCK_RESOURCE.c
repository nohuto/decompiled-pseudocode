/*
 * XREFs of EXP_UNLOCK_RESOURCE @ 0x14022D744
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400966A0 (ExSetResourceOwnerPointerEx.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14022D820 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14022D8CC (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall EXP_UNLOCK_RESOURCE(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( ExpResourceDisableFastSpinlock )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)a2);
    _enable();
  }
}
