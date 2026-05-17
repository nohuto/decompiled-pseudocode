/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x1800F765C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  return LdrProtectMrdata(a1);
}
