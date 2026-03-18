/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140200DDC
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x14074864C (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1407486A8 (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 Next; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(LockHandle);
    return;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)LockHandle, retaddr);
    return;
  }
  _m_prefetchw(LockHandle);
  Next = (__int64)LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      return;
    Next = KxWaitForLockChainValid((__int64 *)LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
}
