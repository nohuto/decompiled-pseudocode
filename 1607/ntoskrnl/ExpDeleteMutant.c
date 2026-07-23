/*
 * XREFs of ExpDeleteMutant @ 0x1400F4C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ExpDeleteMutant(struct _KMUTANT *a1)
{
  return KeReleaseMutant(a1, 1, 1u, 0);
}
