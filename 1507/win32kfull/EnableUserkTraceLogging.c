/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0157450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
TLG_STATUS __stdcall EnableUserkTraceLogging(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  return TraceLoggingRegisterEx(hProvider, pEnableCallback, pCallbackContext);
}
