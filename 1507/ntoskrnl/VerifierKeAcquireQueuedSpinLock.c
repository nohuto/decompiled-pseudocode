/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x1407420E8
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierKeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  void *v2; // rcx
  __int64 v3; // rbx
  KIRQL v4; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D08;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  v4 = pXdvKeAcquireQueuedSpinLock(Number);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v4;
}
