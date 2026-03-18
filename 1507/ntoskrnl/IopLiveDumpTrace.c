/*
 * XREFs of IopLiveDumpTrace @ 0x1401F87B0
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403FFD70 (IopLiveDumpStartDumpDataBuffering.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWrite(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL);
  return result;
}
