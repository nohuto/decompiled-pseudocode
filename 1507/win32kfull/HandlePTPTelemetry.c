/*
 * XREFs of HandlePTPTelemetry @ 0x1C01319BC
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C01318E4 (-EndShutdown@@YAXJ@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02308A4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C022445C (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 */

void *HandlePTPTelemetry()
{
  void *result; // rax

  if ( dword_1C0321C24 )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&gTPTelemState);
    return memset(&gTPTelemState, 0, 0x28uLL);
  }
  return result;
}
