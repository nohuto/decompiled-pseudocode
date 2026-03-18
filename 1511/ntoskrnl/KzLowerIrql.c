/*
 * XREFs of KzLowerIrql @ 0x14004CC30
 * Callers:
 *     VerifierKeLowerIrql @ 0x1406C6104 (VerifierKeLowerIrql.c)
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
