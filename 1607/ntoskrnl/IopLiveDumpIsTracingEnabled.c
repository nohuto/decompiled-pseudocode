/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1401CAEBC
 * Callers:
 *     IopLiveDumpTrace @ 0x1401CAF0C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401CAF3C (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401CAFF4 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401CB0C8 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401CB1E0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401CB270 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1401CB2BC (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1401CB2FC (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1401CB33C (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401CB384 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1401CB408 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401CB448 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403DA4D0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
