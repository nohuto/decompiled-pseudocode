/*
 * XREFs of RtlNumberOfClearBits @ 0x18008B230
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18008B250 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits();
}
