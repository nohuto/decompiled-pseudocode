/*
 * XREFs of EXP_LOCK_RESOURCE @ 0x14022D8A4
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14002D250 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireSharedStarveExclusive @ 0x140034660 (ExAcquireSharedStarveExclusive.c)
 *     ExpLockResource @ 0x14005DB60 (ExpLockResource.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x140096EA0 (ExSetResourceOwnerPointerEx.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1401326C8 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14022D9F4 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14022DAA0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x140090910 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401D3A94 (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall EXP_LOCK_RESOURCE(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  KSPIN_LOCK *v2; // rcx
  char v4; // al
  _QWORD *v5; // rdx
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 96);
  if ( ExpResourceDisableFastSpinlock )
  {
    KeAcquireInStackQueuedSpinLock(v2, a2);
  }
  else
  {
    a2->LockQueue.Next = 0LL;
    v6 = 2;
    a2->LockQueue.Lock = v2;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v4 = KiFastAcquireQueuedSpinLockInstrumented((__int64)a2, (volatile __int64 *)v2, &v6);
    }
    else
    {
      v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)a2);
      v4 = 0;
      if ( v5 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)a2, v5, &v6);
        v4 = 1;
      }
    }
    if ( v4 )
    {
      _disable();
      __writecr8(v6);
    }
  }
}
