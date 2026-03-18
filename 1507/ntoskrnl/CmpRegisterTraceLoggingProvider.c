/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1405C2C64
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TraceLoggingRegisterEx(&stru_14031EED0, 0LL, 0LL);
}
