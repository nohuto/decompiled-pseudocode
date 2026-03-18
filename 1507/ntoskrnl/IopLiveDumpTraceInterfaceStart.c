/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1401F8B14
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
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
