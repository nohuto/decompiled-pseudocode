/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1400E9AAC
 * Callers:
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1406C6148 (VerifierKeRaiseIrqlToDpcLevel.c)
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
