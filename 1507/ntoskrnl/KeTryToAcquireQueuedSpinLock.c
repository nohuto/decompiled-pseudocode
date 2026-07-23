/*
 * XREFs of KeTryToAcquireQueuedSpinLock @ 0x140200A5C
 * Callers:
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140748E38 (VerifierKeTryToAcquireQueuedSpinLock.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

LOGICAL __stdcall KeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  UCHAR CurrentIrql; // bl
  char *v4; // r8
  _DWORD *v5; // rdx
  int v6; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  v5 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v6 = KiTryToAcquireQueuedSpinLockInstrumented(v4);
  }
  else
  {
    _m_prefetchw(v5);
    if ( *v5 || _InterlockedCompareExchange64((volatile signed __int64 *)v5, (signed __int64)v4, 0LL) )
    {
      _mm_pause();
      goto LABEL_9;
    }
    v6 = 1;
  }
  if ( v6 )
  {
    *OldIrql = CurrentIrql;
    return 1;
  }
LABEL_9:
  __writecr8(CurrentIrql);
  return 0;
}
