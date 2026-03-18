/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x1401F8E04
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140131C30 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(_QWORD *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
