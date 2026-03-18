/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1400A9670
 * Callers:
 *     RtlpCreateHashTable @ 0x1400A956C (RtlpCreateHashTable.c)
 *     RtlExpandHashTable @ 0x14010EB80 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * (1 << (a1 + 7))), 0x62615448u);
}
