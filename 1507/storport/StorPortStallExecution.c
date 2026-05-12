/*
 * XREFs of StorPortStallExecution @ 0x1C00113A0
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C0056620 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall StorPortStallExecution(ULONG MicroSeconds)
{
  KeStallExecutionProcessor(MicroSeconds);
}
