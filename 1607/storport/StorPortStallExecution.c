/*
 * XREFs of StorPortStallExecution @ 0x1C0016CA0
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C0062620 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall StorPortStallExecution(ULONG MicroSeconds)
{
  KeStallExecutionProcessor(MicroSeconds);
}
