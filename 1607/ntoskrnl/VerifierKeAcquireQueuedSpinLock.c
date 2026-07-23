/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x14070C98C
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140307248;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  result = pXdvKeAcquireQueuedSpinLock(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
