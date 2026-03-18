/*
 * XREFs of KzLowerIrql @ 0x1400425C0
 * Callers:
 *     VerifierKeLowerIrql @ 0x14074846C (VerifierKeLowerIrql.c)
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
