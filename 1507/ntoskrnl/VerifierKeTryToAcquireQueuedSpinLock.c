/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLock @ 0x140748E38
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x140200A5C (KeTryToAcquireQueuedSpinLock.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  LOGICAL v6; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D08;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v4) = 2;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  v6 = pXdvKeTryToAcquireQueuedSpinLock(Number, OldIrql);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v6;
}
