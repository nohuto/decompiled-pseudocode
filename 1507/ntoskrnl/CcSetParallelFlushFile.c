/*
 * XREFs of CcSetParallelFlushFile @ 0x14003FD88
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _DWORD *SharedCacheMap; // rdi
  KIRQL v4; // si
  volatile signed __int64 **v5; // rbx
  __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = KeAcquireQueuedSpinLock(5uLL);
  if ( EnableParallelFlush )
    SharedCacheMap[38] |= 0x40000u;
  else
    SharedCacheMap[38] &= ~0x40000u;
  v5 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
    goto LABEL_6;
  }
  _m_prefetchw(v5);
  v6 = (__int64)*v5;
  if ( *v5 )
    goto LABEL_8;
  if ( v5 != (volatile signed __int64 **)_InterlockedCompareExchange64(v5[1], 0LL, (signed __int64)v5) )
  {
    v6 = KxWaitForLockChainValid(v5);
LABEL_8:
    *v5 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
  }
LABEL_6:
  __writecr8(v4);
}
