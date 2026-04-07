/*
 * XREFs of InitOnceComplete_0 @ 0x18004F18E
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004B830 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004B8A0 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceComplete_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)
{
  return InitOnceComplete(lpInitOnce, dwFlags, lpContext);
}
