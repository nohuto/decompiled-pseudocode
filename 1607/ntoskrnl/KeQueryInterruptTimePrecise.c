/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14012A9A0
 * Callers:
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x14066FA74 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __cdecl KeQueryInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  return RtlGetInterruptTimePrecise(PerformanceCounter);
}
