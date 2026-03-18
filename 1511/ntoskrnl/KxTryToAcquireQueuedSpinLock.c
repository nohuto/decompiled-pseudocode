/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1400D56B0
 * Callers:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400D5698 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1401C4778 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401C47D0 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2, __int64 a3)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireQueuedSpinLockInstrumented(a1, a2, a3);
  _m_prefetchw(a2);
  if ( !*a2 && !_InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    return 1LL;
  _mm_pause();
  return 0LL;
}
