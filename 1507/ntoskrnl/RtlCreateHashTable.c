/*
 * XREFs of RtlCreateHashTable @ 0x14011F4C0
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x14056C2F0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1405951D8 (SepInitializeSharedSidMap.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407BC278 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
