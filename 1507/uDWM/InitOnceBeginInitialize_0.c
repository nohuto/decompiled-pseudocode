/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x180048B22
 * Callers:
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180047A48 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x180047B40 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 *     ??1?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x18004835C (--1-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800484B4 (--1-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
