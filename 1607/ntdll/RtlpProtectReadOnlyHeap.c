/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x1800F7668
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  LdrProtectMrdataHeap(a1);
}
