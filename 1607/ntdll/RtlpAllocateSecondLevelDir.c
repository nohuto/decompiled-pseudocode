/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007EEFC
 * Callers:
 *     RtlpCreateHashTable @ 0x18007EDF8 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x18008B4D0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 * (1 << (a1 + 7))));
}
