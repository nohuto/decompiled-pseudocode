/*
 * XREFs of CcNotifyExternalCaches @ 0x1401DCA54
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcCalculatePagesToWrite @ 0x14006819C (CcCalculatePagesToWrite.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  volatile signed __int64 **v5; // rbx
  __int64 v6; // rax
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&CcExternalCacheListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&CcExternalCacheListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&CcExternalCacheListLock);
  }
  KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  v3 = (unsigned int)CcCalculatePagesToWrite(
                       a1,
                       (__int64)&CcGlobalDirtyPageStatistics,
                       (unsigned __int64 *)&CcGlobalDirtyPageThresholds,
                       0);
  if ( v3 == 0xFFFFFFFFLL )
  {
    LODWORD(v4) = 100;
  }
  else if ( CcGlobalDirtyPageStatistics )
  {
    v4 = 100 * v3 / (unsigned __int64)CcGlobalDirtyPageStatistics;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  v5 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(v5);
  v6 = (__int64)*v5;
  if ( !*v5 )
  {
    if ( v5 == (volatile signed __int64 **)_InterlockedCompareExchange64(v5[1], 0LL, (signed __int64)v5) )
      goto LABEL_16;
    v6 = KxWaitForLockChainValid((__int64 *)v5);
  }
  *v5 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
LABEL_16:
  if ( (_DWORD)v4 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v8 = *(i - 3);
      if ( v8 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v8 * (unsigned __int64)(unsigned int)v4 / 0x64,
          a1);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&CcExternalCacheListLock, retaddr);
  else
    _InterlockedAnd64(&CcExternalCacheListLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
