/*
 * XREFs of IopLiveDumpTrace @ 0x1401CAF0C
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403DB8B8 (IopLiveDumpStartDumpDataBuffering.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14062651C (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CAEBC (IopLiveDumpIsTracingEnabled.c)
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
