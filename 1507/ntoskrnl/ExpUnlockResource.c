/*
 * XREFs of ExpUnlockResource @ 0x1400C66F0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     ExDisableResourceBoostLite @ 0x1401397D0 (ExDisableResourceBoostLite.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpUnlockResource(__int64 a1, volatile signed __int64 **a2)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(a2);
    result = (__int64)*a2;
    if ( !*a2 )
    {
      result = _InterlockedCompareExchange64(a2[1], 0LL, (signed __int64)a2);
      if ( a2 == (volatile signed __int64 **)result )
      {
LABEL_4:
        _enable();
        return result;
      }
      result = KxWaitForLockChainValid((__int64 *)a2);
    }
    *a2 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_4;
  }
  result = KiReleaseQueuedSpinLockInstrumented(a2, retaddr);
  _enable();
  return result;
}
