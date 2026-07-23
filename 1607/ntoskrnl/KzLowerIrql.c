/*
 * XREFs of KzLowerIrql @ 0x14002E550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
