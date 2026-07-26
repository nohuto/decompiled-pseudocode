/*
 * XREFs of NdisProcessorIndexToNumber @ 0x1C004B920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NdisProcessorIndexToNumber(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNum)
{
  return KeGetProcessorNumberFromIndex(ProcIndex, ProcNum);
}
