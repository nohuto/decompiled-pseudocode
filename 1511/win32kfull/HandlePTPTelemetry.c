/*
 * XREFs of HandlePTPTelemetry @ 0x1C014F8EC
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010F9B0 (-EndShutdown@@YAXJ@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C02257F8 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 */

void *HandlePTPTelemetry()
{
  void *result; // rax

  if ( dword_1C0321C78 )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&gTPTelemState);
    return memset(&gTPTelemState, 0, 0x2CuLL);
  }
  return result;
}
