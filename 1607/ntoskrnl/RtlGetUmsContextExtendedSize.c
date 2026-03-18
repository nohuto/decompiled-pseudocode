/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x140218540
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14020F39C (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x1404599E8 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14067F69C (PspUmsInitializeContext.c)
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
