/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x18007EF0C
 * Callers:
 *     RtlpCreateHashTable @ 0x18007EE08 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x18008B4E0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 * (1 << (a1 + 7))));
}
