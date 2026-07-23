/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x14002E21C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL result; // al

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  return result;
}
