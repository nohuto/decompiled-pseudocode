/*
 * XREFs of EnableUserkTraceLogging @ 0x1402A8DD0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403E24C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x1403E2E28 (TlgRegisterAggregateProviderEx.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403AAA30);
  TlgRegisterAggregateProviderEx();
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403AA9C0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403AAA68);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1403AAAA0);
}
