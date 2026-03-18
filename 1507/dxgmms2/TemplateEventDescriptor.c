/*
 * XREFs of TemplateEventDescriptor @ 0x1C001BEB8
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C001C490 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0, 0LL);
}
