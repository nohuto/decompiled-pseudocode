/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x18004F182
 * Callers:
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18004B7A4 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004B8A0 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 *     ??1?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x18004EADC (--1-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 *     ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004EB54 (--1-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
