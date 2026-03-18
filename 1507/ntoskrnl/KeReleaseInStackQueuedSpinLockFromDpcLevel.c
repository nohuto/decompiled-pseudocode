/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400C8060
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1407486E4 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x140748740 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 Next; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
  }
  else
  {
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
}
