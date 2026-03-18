/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14011F744
 * Callers:
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     PdcPoCsEnterExitReason @ 0x1406376B4 (PdcPoCsEnterExitReason.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
