/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1400E5A00
 * Callers:
 *     RtlpCreateHashTable @ 0x1400E5870 (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x140105490 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * (1 << (a1 + 7))), 0x62615448u);
}
