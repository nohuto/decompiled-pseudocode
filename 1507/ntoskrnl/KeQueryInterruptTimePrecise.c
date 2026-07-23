/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140154870
 * Callers:
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406B7514 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __cdecl KeQueryInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  return RtlGetInterruptTimePrecise(PerformanceCounter);
}
