/*
 * XREFs of PopSystemRequiredSet @ 0x140131F28
 * Callers:
 *     NtSetThreadExecutionState @ 0x14052CD00 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3);
}
