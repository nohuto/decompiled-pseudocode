/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140747DC8
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140200A04 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

unsigned __int8 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int8 v4; // di
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D08;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v2) = 12;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  v4 = KeAcquireQueuedSpinLockRaiseToSynch(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v4;
}
