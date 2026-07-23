/*
 * XREFs of IopLiveDumpTraceMirroringPhase0End @ 0x1401CB1A0
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceMirroringPhase0End()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE0_END;
    if ( (*(_BYTE *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE0_END;
    return EtwWrite(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL);
  }
  return result;
}
