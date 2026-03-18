/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1406C6758
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1401C47D0 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1402E1888;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v4) = 12;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  result = KeTryToAcquireQueuedSpinLockRaiseToSynch(a1, a2, v6);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
