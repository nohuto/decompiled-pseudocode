/*
 * XREFs of IopLiveDumpTraceMirroringStart @ 0x1401CB220
 * Callers:
 *     IopLiveDumpStartMirroringCallback @ 0x1403DB948 (IopLiveDumpStartMirroringCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceMirroringStart()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_START;
    if ( (*(_BYTE *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_START;
    return EtwWrite(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL);
  }
  return result;
}
