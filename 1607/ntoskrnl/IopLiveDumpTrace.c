/*
 * XREFs of IopLiveDumpTrace @ 0x1401CADF0
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8 (IopLiveDumpStartDumpDataBuffering.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406265D0 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
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
