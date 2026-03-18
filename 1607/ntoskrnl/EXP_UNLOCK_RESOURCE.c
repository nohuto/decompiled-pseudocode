/*
 * XREFs of EXP_UNLOCK_RESOURCE @ 0x14022D918
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireSharedStarveExclusive @ 0x140034660 (ExAcquireSharedStarveExclusive.c)
 *     ExpUnlockResource @ 0x140066CF0 (ExpUnlockResource.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x140096EA0 (ExSetResourceOwnerPointerEx.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1401326C8 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14022D9F4 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14022DAA0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
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
