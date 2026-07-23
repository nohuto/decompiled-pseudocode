/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x1407126D4
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_14030724C;
  v5 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 136LL);
  LOBYTE(v5) = *(_BYTE *)(a1 + 93);
  ViKeRaiseIrqlSanityChecks(v5, 0LL);
  return pXdvKeSynchronizeExecution(a1, a2, a3);
}
