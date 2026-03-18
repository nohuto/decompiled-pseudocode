/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x1406C08F4
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierKeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  void *v2; // rcx
  __int64 v3; // rbx
  KIRQL result; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1402E1888;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  result = pXdvKeAcquireQueuedSpinLock(Number);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
