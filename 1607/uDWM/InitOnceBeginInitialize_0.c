/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x18004F78E
 * Callers:
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18004C86C (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004CA08 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 *     ??1?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x18004F0B8 (--1-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004F194 (--1-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
