/*
 * XREFs of RtlNumberOfClearBits @ 0x1800D3140
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800D3190 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits();
}
