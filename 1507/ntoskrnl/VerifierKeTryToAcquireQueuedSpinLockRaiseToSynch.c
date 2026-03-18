/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140748EAC
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140200AD8 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D08;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v4) = 12;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  v6 = KeTryToAcquireQueuedSpinLockRaiseToSynch(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v6;
}
