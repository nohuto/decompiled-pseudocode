/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401C47D0
 * Callers:
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1406C6758 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D56B0 (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_DWORD **)v5 + 1), a3) )
  {
    *a2 = CurrentIrql;
    return 1LL;
  }
  else
  {
    __writecr8(CurrentIrql);
    return 0LL;
  }
}
