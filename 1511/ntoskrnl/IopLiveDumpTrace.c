/*
 * XREFs of IopLiveDumpTrace @ 0x1401BCF24
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403AEB54 (IopLiveDumpEndMirroringCallback.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405FC8A4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401BCED4 (IopLiveDumpIsTracingEnabled.c)
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
