/*
 * XREFs of RitPrepDitTakeOver @ 0x1C011AD34
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C009472C (ResetPointerDevices.c)
 *     vRemoveAndCleanupRimClient @ 0x1C011AD94 (vRemoveAndCleanupRimClient.c)
 */

__int64 RitPrepDitTakeOver()
{
  if ( !*(_DWORD *)(gpDitInfo + 52) )
  {
    SetThreadBasePriority(*(_QWORD *)gptiDit, 16LL);
    if ( gptiManipulationThread )
      SetThreadBasePriority(*(_QWORD *)gptiManipulationThread, 16LL);
  }
  ResetPointerDevices();
  vRemoveAndCleanupRimClient();
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  return 1LL;
}
