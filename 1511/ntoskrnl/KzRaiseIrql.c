/*
 * XREFs of KzRaiseIrql @ 0x140079D90
 * Callers:
 *     VerifierKfRaiseIrql @ 0x1406C6970 (VerifierKfRaiseIrql.c)
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
