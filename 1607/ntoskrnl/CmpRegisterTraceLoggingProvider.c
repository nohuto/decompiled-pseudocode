/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1405814A4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TraceLoggingRegisterEx(&stru_1402F34E0, 0LL, 0LL);
}
