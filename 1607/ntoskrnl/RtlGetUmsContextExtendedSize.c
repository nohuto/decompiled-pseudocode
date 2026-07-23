/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14021836C
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14020F1C8 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14067F780 (PspUmsInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetUmsContextExtendedSize()
{
  unsigned int v0; // ecx

  v0 = 1312;
  if ( MEMORY[0xFFFFF780000003E8] )
    return (unsigned int)(MEMORY[0xFFFFF780000003E8] + 1375);
  return v0;
}
