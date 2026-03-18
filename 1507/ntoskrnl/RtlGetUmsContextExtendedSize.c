/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14024E000
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140243A1C (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x1406C3828 (PspUmsInitializeContext.c)
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
