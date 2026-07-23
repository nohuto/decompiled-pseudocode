/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14011F744
 * Callers:
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406376B4 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __cdecl KeQueryInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  return RtlGetInterruptTimePrecise(PerformanceCounter);
}
