/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401D37B4
 * Callers:
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1407127A8 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x140108E00 (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  char *v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v4, *((_DWORD **)v4 + 1)) )
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
