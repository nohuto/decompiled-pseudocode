/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14012A430
 * Callers:
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x14066F990 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
