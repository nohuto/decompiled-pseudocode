/*
 * XREFs of KzRaiseIrql @ 0x140102800
 * Callers:
 *     VerifierKfRaiseIrql @ 0x14074971C (VerifierKfRaiseIrql.c)
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
