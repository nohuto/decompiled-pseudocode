/*
 * XREFs of NdisGetCurrentProcessorCpuUsage @ 0x1C0050980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisGetCurrentProcessorCpuUsage(PULONG pCpuUsage)
{
  ExGetCurrentProcessorCpuUsage(pCpuUsage);
}
