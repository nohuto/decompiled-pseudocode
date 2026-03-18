/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140580FF8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TraceLoggingRegisterEx(&stru_1402F34E0, 0LL, 0LL);
}
