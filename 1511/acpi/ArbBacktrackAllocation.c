/*
 * XREFs of ArbBacktrackAllocation @ 0x1C00810C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ArbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  return RtlDeleteRange_0(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
}
