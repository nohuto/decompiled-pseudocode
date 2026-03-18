/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1401027F0
 * Callers:
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1407484F8 (VerifierKeRaiseIrqlToDpcLevel.c)
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
