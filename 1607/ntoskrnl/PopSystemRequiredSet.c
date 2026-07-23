/*
 * XREFs of PopSystemRequiredSet @ 0x140132498
 * Callers:
 *     NtSetThreadExecutionState @ 0x14052D240 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3);
}
