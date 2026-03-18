/*
 * XREFs of HandlePTPTelemetry @ 0x1C015526C
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0130610 (-EndShutdown@@YAXJ@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C1E24 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C021E3F0 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C021EB98 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void *HandlePTPTelemetry()
{
  void *result; // rax

  if ( dword_1C0326D74 )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&gTPTelemState);
    if ( qword_1C0326D78 > 0 || qword_1C0326D80 > 0 || dword_1C0326D4C || dword_1C0326D50 )
      TraceLoggingPTPUsageDetailsEvent((const struct tagTPTELEMSTATE *)&gTPTelemState, gliQpcFreq.QuadPart);
    return memset(&gTPTelemState, 0, 0x58uLL);
  }
  return result;
}
