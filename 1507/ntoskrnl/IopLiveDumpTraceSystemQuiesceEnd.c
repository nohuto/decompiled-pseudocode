/*
 * XREFs of IopLiveDumpTraceSystemQuiesceEnd @ 0x1401F8CB4
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1403FFE28 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceSystemQuiesceEnd()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_END;
    if ( (*(_BYTE *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_END;
    return EtwWrite(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL);
  }
  return result;
}
