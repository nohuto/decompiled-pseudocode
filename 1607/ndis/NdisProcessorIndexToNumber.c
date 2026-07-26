/*
 * XREFs of NdisProcessorIndexToNumber @ 0x1C0050B20
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
