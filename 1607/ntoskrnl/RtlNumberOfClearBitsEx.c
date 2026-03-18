/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x140213130
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x14013ACD8 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(_QWORD *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
