/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x1800F7668
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectReadOnlyHeap(int a1, char *a2, __int64 a3, __int64 a4)
{
  return LdrProtectMrdataHeap(a1, a2, a3, a4);
}
