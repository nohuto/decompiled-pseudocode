/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1400A7BF0
 * Callers:
 *     RtlpCreateHashTable @ 0x1400A7AEC (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x14010F0E4 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * (1 << (a1 + 7))), 0x62615448u);
}
