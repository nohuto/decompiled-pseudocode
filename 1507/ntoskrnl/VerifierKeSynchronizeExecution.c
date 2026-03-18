/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140748DD4
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

BOOLEAN __fastcall VerifierKeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D0C;
  v5 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 136LL);
  LOBYTE(v5) = Interrupt->SynchronizeIrql;
  ViKeRaiseIrqlSanityChecks(v5, 0LL);
  return pXdvKeSynchronizeExecution(Interrupt, SynchronizeRoutine, SynchronizeContext);
}
