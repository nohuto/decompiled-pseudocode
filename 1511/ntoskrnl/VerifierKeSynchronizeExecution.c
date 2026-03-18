/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x1406C6684
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 */

BOOLEAN __fastcall VerifierKeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1402E188C;
  v5 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 136LL);
  LOBYTE(v5) = Interrupt->SynchronizeIrql;
  ViKeRaiseIrqlSanityChecks(v5, 0LL);
  return pXdvKeSynchronizeExecution(Interrupt, SynchronizeRoutine, SynchronizeContext);
}
