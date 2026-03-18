/*
 * XREFs of PsIsDpcActive @ 0x140243E8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsDpcActive()
{
  return KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->DpcRoutineActive;
}
