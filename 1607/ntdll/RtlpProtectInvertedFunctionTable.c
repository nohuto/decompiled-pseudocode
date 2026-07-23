/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x1800F765C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  LdrProtectMrdata(a1);
}
