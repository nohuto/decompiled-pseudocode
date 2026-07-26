/*
 * XREFs of NdisGetCurrentProcessorCounts @ 0x1C00264C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisGetCurrentProcessorCounts(PULONG pIdleCount, PULONG pKernelAndUser, PULONG pIndex)
{
  ExGetCurrentProcessorCounts(pIdleCount, pKernelAndUser, pIndex);
}
