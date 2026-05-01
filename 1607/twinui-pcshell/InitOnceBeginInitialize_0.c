/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x18002F67C
 * Callers:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18001B4B4 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18001B578 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ??__Fwrapper@?1??Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ@YAXXZ @ 0x180031E30 (--__Fwrapper@-1--Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ@YAXXZ.c)
 *     ??__Fwrapper@?1??Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ @ 0x180031EA0 (--__Fwrapper@-1--Instance@ScalingCompatLogging@@KAPEAV1@XZ@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
