/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1401CB270
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14061C01C (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14062651C (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CAEBC (IopLiveDumpIsTracingEnabled.c)
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
