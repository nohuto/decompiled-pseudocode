/*
 * XREFs of KzRaiseIrql @ 0x14002E850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  return result;
}
