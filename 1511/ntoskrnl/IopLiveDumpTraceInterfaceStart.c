/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1401BD288
 * Callers:
 *     DbgkpWerCleanupContext @ 0x1405F1DC4 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405FC8A4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401BCED4 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // ecx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v1 )
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
      if ( v1 != 1 )
        v2 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    }
    else
    {
      v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_CAPTURE_API_START;
    }
    return EtwWrite(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL);
  }
  return result;
}
