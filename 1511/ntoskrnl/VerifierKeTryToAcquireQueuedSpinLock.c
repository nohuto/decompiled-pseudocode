/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLock @ 0x1406C66E8
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLock @ 0x1401C4778 (KeTryToAcquireQueuedSpinLock.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

LOGICAL __fastcall VerifierKeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  LOGICAL result; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1402E1888;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v4) = 2;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  result = pXdvKeTryToAcquireQueuedSpinLock(Number, OldIrql);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
