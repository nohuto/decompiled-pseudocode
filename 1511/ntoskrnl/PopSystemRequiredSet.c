/*
 * XREFs of PopSystemRequiredSet @ 0x14012723C
 * Callers:
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3);
}
