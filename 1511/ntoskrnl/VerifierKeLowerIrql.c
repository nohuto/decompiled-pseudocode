/*
 * XREFs of VerifierKeLowerIrql @ 0x1406C6104
 * Callers:
 *     <none>
 * Callees:
 *     KzLowerIrql @ 0x14004CC30 (KzLowerIrql.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1406C6F78 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeLowerIrql(KIRQL a1, __int64 a2)
{
  __int64 v3; // rbx

  LOBYTE(a2) = a1;
  v3 = ViKeLowerIrqlSanityChecks(KeGetCurrentIrql(), a2);
  pXdvKeLowerIrql(a1);
  return ViKeIrqlLogCommon(v3, 1LL);
}
