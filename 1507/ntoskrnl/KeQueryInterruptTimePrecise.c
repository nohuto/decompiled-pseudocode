/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140154870
 * Callers:
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406B7514 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
