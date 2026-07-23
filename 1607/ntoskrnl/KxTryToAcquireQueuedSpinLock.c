/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x140108E00
 * Callers:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140108DE8 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1401D375C (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401D37B4 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireQueuedSpinLockInstrumented(a1);
  _m_prefetchw(a2);
  if ( !*a2 && !_InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    return 1LL;
  _mm_pause();
  return 0LL;
}
