/*
 * XREFs of StorPortStallExecution @ 0x1C0013940
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C005A620 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall StorPortStallExecution(ULONG MicroSeconds)
{
  KeStallExecutionProcessor(MicroSeconds);
}
