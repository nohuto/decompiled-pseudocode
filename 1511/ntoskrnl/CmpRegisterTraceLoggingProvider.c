/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14054B8BC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TraceLoggingRegisterEx(&stru_1402CFD30, 0LL, 0LL);
}
