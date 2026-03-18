/*
 * XREFs of VerifierKeLowerIrql @ 0x140712154
 * Callers:
 *     <none>
 * Callees:
 *     ViKeLowerIrqlSanityChecks @ 0x140712FC8 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeLowerIrql(char a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx

  LOBYTE(a2) = a1;
  v3 = ViKeLowerIrqlSanityChecks(KeGetCurrentIrql(), a2);
  LOBYTE(v4) = a1;
  v5 = v3;
  pXdvKeLowerIrql(v4);
  return ViKeIrqlLogCommon(v5, 1LL);
}
