/*
 * XREFs of KzLowerIrql @ 0x14002E9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
