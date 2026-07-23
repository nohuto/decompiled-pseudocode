/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18006FF60
 * Callers:
 *     RtlExpandHashTable @ 0x18006F900 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x18006FDC8 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 * (1 << (a1 + 7))));
}
