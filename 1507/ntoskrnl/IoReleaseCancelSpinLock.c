/*
 * XREFs of IoReleaseCancelSpinLock @ 0x140111450
 * Callers:
 *     VerifierIoReleaseCancelSpinLock @ 0x140742000 (VerifierIoReleaseCancelSpinLock.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v2; // rbx
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v2);
  v3 = (__int64)*v2;
  if ( *v2 )
    goto LABEL_6;
  if ( v2 != (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
  {
    v3 = KxWaitForLockChainValid((__int64 *)v2);
LABEL_6:
    *v2 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v3 + 8), 1uLL);
  }
LABEL_4:
  __writecr8(Irql);
}
