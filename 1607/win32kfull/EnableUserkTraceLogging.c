/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0135900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

TLG_STATUS __fastcall EnableUserkTraceLogging(__int64 a1, ETWENABLECALLBACK *a2, void *a3)
{
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0320840, a2, a3);
}
