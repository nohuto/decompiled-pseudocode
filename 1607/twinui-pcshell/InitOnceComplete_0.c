/*
 * XREFs of InitOnceComplete_0 @ 0x18002F688
 * Callers:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18001B4B4 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18001B578 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceComplete_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)
{
  return InitOnceComplete(lpInitOnce, dwFlags, lpContext);
}
